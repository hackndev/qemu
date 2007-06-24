/*
 * M-Systems mDOC P3 support
 *
 * Copyright (C) 2007 Alex Osborne <alex@mugofgrog.com>
 *
 * This code is licensed under the GPL.
 *
 */

#include "vl.h"

/* modes */
#define MDOC_MODE        3
#define MDOC_MODE_BOOT   0
#define MDOC_MODE_NORMAL 1
#define MDOC_MODE_DPDOWN 2

/* registers: documented */
#define MDOC_DOC_CTRL       0x100c
#define MDOC_DOC_CTRL_CNF   0x1072
#define MDOC_READ_ADDR      0x101a
#define MDOC_CHIP_ID0       0x1000
#define MDOC_CHIP_ID1       0x1074

/* registers: guessed */
#define MDOC_CMD            0x1032
#define MDOC_CMD2           0x1034
#define MDOC_FLASH_ADDR     0x1036
#define MDOC_RDY            0x1038 /* bit 0 = some kind of  RDY. 
                                        register may have other uses*/

#define MDOC_MDWREN (1<<2)


struct mdoc_s {
    BlockDriverState *bdrv;
    uint8_t doc_ctrl;
    uint32_t addr;

    uint16_t chip_id0;
    uint16_t chip_id1;

    int last_ctrl_write;
};

static void mdoc_reset(struct mdoc_s *s)
{
    s->doc_ctrl = MDOC_MODE_BOOT;
    s->last_ctrl_write = -1;
    s->addr = 0;
}

static int once = 0;
static uint32_t mdoc_read(void *opaque, target_phys_addr_t offset)
{
    struct mdoc_s *s = (struct mdoc_s*)opaque;
    uint32_t ret = 0x0;

    printf("%x\n", offset);

    offset &= 0xffff;

    s->last_ctrl_write = -1; /* any read cancels mode change */
    
    if ((s->doc_ctrl & MDOC_MODE) == MDOC_MODE_BOOT)
        return 0;

    switch (offset) {
    case 0x802:
        once = !once;
        if (once)
            ret = 0x4942;
        else
            ret = 0x4f50;
        break;

    case MDOC_CHIP_ID0:
        ret = s->chip_id0;
        break;
    case MDOC_CHIP_ID1:
        ret = s->chip_id1;
        break;
    case 0x1038:
        if (!once) {
            ret = 0x39;
            once = 1;
        } else
            ret = 0x31;
        break;
    }

    printf("%s: %x: %x\n", __FUNCTION__, offset, ret);

    return ret;
}

static void mdoc_write(void *opaque,
                target_phys_addr_t offset, uint32_t value)
{
    struct mdoc_s *s = (struct mdoc_s*)opaque;

    offset &= 0xffff;
    if (value > 0xff)
        printf("mh %x 1 %x\n", offset, value);
    else
        printf("mb %x 1 %x\n", offset, value);
    
    switch (offset) {
    case MDOC_DOC_CTRL:         /* DOC Control */
        if (value & MDOC_MDWREN) {
            s->last_ctrl_write = value;
            return;
        }
        break;

    case MDOC_DOC_CTRL_CNF:     /* DOC Control Confirmation */
        if (s->last_ctrl_write == -1) break;
        if (((~value) & 0xff) == (s->last_ctrl_write & 0xff))
            s->doc_ctrl = value & 3;
        break;

    case MDOC_READ_ADDR:        /* Read Address */
        s->addr = value & 0xdfff;
        break;

    }
    
    s->last_ctrl_write = -1; /* any other write cancels mode change */

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
    s->chip_id0 = 0x200;
    s->chip_id1 = 0xfdff;

    iomemtype = cpu_register_io_memory(0, mdoc_readfn, mdoc_writefn, s);
    cpu_register_physical_memory(0x800, 0x04000000-0x800, iomemtype);

    mdoc_reset(s);
    return s;
}
