# Very primitive system call tracer

try:
	import psyco
	psyco.full()
except ImportError:
	print 'Info: Psyco unavailable.'

def main():
	asm = {}
	asmT = {}
	tables = {'HALTable':4, 'SystemTable':8}
	syscalls = {}

	print "Loading SysTables..."
	for line in file('SysTables.txt'):
		bits = line.split()
		if len(bits) != 3: continue

		table = tables.get(bits[0])
		if table is None: continue
		offset = int(bits[1][2:], 16)
		syscalls[(table, offset)] = bits[2]

	print "Loading arm asm..."
	for line in file('dis.arm'):
		line = line.replace('\t','        ')
		try:
			addr = int(line[:8],16)
		except:
			continue
		instr = line[34:-1]
		asm[addr] = instr
	print "done."
	
	print "Loading thumb asm..."
	for line in file('dis.thumb'):
		l = line
		line = line.replace('\t','        ')
		try:
			addr = int(line[:8],16)
		except:
			continue
		instr = '\t'.join(l.split('\t')[2:])[:-1]
		asmT[addr] = instr
	print "done."

	last_addr = 0
	for line in file('qemu_trace_log'):
		if line[:2] != 'PC': continue
	
		addr = int(line[5:-1],16)
		if (addr & 0xf0000000) == 0xa0000000: continue
		
		eep = ''
		if addr & 1:
			addr &= ~1;
			ins = asmT.get(addr-0x20000000,'?')
		else:
			ins = asm.get(addr-0x20000000,'?')
		
		cmt = ''
		if ins.startswith('ldr        ip, [r9, #-'):
			presys_addr = last_addr
			table = int(ins[22])
			if table != 4 and table != 8:
				print 'new table', table
		elif ins.startswith('ldr        pc, [ip, #'):
			offset = ins[21:]

			try:
				offset = int(offset[:offset.find(']')])
			except ValueError:
				print 'xxxx', ins
				continue

			call = syscalls.get((table, offset))
			if call is not None:
				print '%x: %s [%d, %x]' % (presys_addr, call, table, 
							offset)
				
			
			
		print '%x: %s ## %s' % (addr, ins, cmt)
		last_addr = addr

	raw_input()

main()
