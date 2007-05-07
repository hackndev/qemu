/*
 * M-Systems mDOC P3 support
 *
 * Copyright (C) 2007 Alex Osborne <alex@mugofgrog.com>
 *
 * This code is licensed under the GPL.
 *
 */

#include "vl.h"

#define MDOC_MODE_BOOT   0
#define MDOC_MODE_NORMAL 1
#define MDOC_MODE_DPDOWN 2

struct mdoc_s {
    BlockDriverState *bdrv;
    int mode;

    uint8_t bootblk[0x800];
};

static void mdoc_reset(struct mdoc_s *s)
{
    s->mode = MDOC_MODE_BOOT;
}

static uint32_t mdoc_read(void *opaque, target_phys_addr_t offset)
{
    struct mdoc_s *s = (struct mdoc_s*)opaque;
    printf("%s: %x\n", __FUNCTION__, offset);
    return 0;
}

static void mdoc_write(void *opaque,
                target_phys_addr_t offset, uint32_t value)
{
    struct mdoc_s *s = (struct mdoc_s*)opaque;
    printf("%s: %x := %x\n", __FUNCTION__, offset, value);
}

static CPUReadMemoryFunc *mdoc_readfn[] = {
    mdoc_read,
    mdoc_read,
    mdoc_read
};

static CPUWriteMemoryFunc *mdoc_writefn[] = {
    mdoc_write,
    mdoc_write,
    mdoc_write
};

struct mdoc_s *mdoc_init(void)
{
    struct mdoc_s *s;
    int iomemtype;

    s = (struct mdoc_s*) qemu_mallocz(sizeof(struct mdoc_s));
    s->bdrv = mtd_bdrv;

    iomemtype = cpu_register_io_memory(0, mdoc_readfn, mdoc_writefn, s);
    cpu_register_physical_memory(0x0, 0x03ffffff, iomemtype);

    mdoc_reset(s);
    return s;
}
