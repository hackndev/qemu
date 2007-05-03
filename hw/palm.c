/*
 * Palm LifeDrive.
 *
 * Copyright (c) 2007 Andrzej Zaborowski  <balrog@zabor.org>
 *
 * This code is licensed under the GPLv2.
 */

#include "vl.h"

#define ld_printf(format, ...)	\
    fprintf(stderr, "%s: " format, __FUNCTION__, ##__VA_ARGS__)

/* CF Microdrive */

static void ld_microdrive_attach(struct pxa2xx_state_s *cpu)
{
    struct pcmcia_card_s *md;
    BlockDriverState *bs = bs_table[0];

    if (bs && bdrv_is_inserted(bs) && !bdrv_is_removable(bs)) {
        md = dscm1xxxx_init(bs);
        pxa2xx_pcmcia_attach(cpu->pcmcia[0], md);
    }
}

/* Other peripherals */

static void ld_btpwr1_switch(int line, int level, void *opaque)
{
    ld_printf("Bluetooth powered %s (1).\n", level ? "up" : "down");
}

static void ld_lcdpwr1_switch(int line, int level, void *opaque)
{
    ld_printf("LCD powered %s (1).\n", level ? "up" : "down");
}

static void ld_wlanpwr_switch(int line, int level, void *opaque)
{
    ld_printf("WLAN powered %s.\n", level ? "up" : "down");
}

static void ld_greenled_switch(int line, int level, void *opaque)
{
    ld_printf("Green LED %s.\n", level ? "on" : "off");
}

static void ld_wlan_reset(int line, int level, void *opaque)
{
    ld_printf("WLAN %s reset state.\n", level ? "in" : "out of");
}

static void ld_btpwr2_switch(int line, int level, void *opaque)
{
    ld_printf("Bluetooth powered %s (2).\n", level ? "up" : "down");
}

static void ld_blpwr_switch(int line, int level, void *opaque)
{
    ld_printf("LCD backlight %s.\n", level ? "on" : "off");
}

static void ld_serialpwr_switch(int line, int level, void *opaque)
{
    ld_printf("Serial port powered %s.\n", level ? "up" : "down");
}

static void ld_orangeled_switch(int line, int level, void *opaque)
{
    ld_printf("Orange LED %s.\n", level ? "on" : "off");
}

static void ld_lcdpwr2_switch(int line, int level, void *opaque)
{
    ld_printf("LCD powered %s (2).\n", level ? "up" : "down");
}

static void ld_hdd_reset(int line, int level, void *opaque)
{
    ld_printf("HDD %s reset state.\n", level ? "in" : "out of");
}

static void ld_usbpwr_switch(int line, int level, void *opaque)
{
    ld_printf("(possibly) USB powered %s.\n", level ? "up" : "down");
}

static void ld_irpwr_switch(int line, int level, void *opaque)
{
    ld_printf("Infrared powered %s.\n", level ? "down" : "up");
}

static void ld_hddpwr_switch(int line, int level, void *opaque)
{
    ld_printf("HDD powered %s.\n", level ? "up" : "down");
}

#define LD_GPIO_BT1_PWR		17
#define LD_GPIO_LCD1_PWR	19
#define LD_GPIO_WLAN_PWR	36
#define LD_GPIO_GREEN_LED	52
#define LD_GPIO_WLAN_RST	81
#define LD_GPIO_BT2_PWR		83
#define LD_GPIO_BL_PWR		84
#define LD_GPIO_UART_PWR	91
#define LD_GPIO_ORANGE_LED	94
#define LD_GPIO_HDD_IRQ 	95
#define LD_GPIO_LCD2_PWR	96
#define LD_GPIO_HDD_RST		98
#define LD_GPIO_USB_PWR		99
#define LD_GPIO_IR_PWR		108
#define LD_GPIO_HDD_PWR		115

static void ld_pcmcia_cb(void *opaque, int line, int level)
{
    struct pxa2xx_state_s *cpu = (struct pxa2xx_state_s *)opaque;
    if (line == 0) {
        pxa2xx_gpio_set(cpu->gpio, LD_GPIO_HDD_IRQ, !level);
    }
}

static void ld_gpio_setup(struct pxa2xx_state_s *cpu)
{
    qemu_irq *pcmcia_cb;

    /* PCMCIA signals: card's IRQ and Card-Detect*/
    pcmcia_cb = qemu_allocate_irqs(ld_pcmcia_cb, cpu, 2);
    pxa2xx_pcmcia_set_irq_cb(cpu->pcmcia[0], pcmcia_cb[0], pcmcia_cb[1]);

    /* Input pins levels */
    pxa2xx_gpio_set(cpu->gpio, 0, 1);
    pxa2xx_gpio_set(cpu->gpio, 1, 1);
    pxa2xx_gpio_set(cpu->gpio, 2, 1);
    pxa2xx_gpio_set(cpu->gpio, 3, 1);
    pxa2xx_gpio_set(cpu->gpio, 4, 1);
    pxa2xx_gpio_set(cpu->gpio, 5, 1);
    pxa2xx_gpio_set(cpu->gpio, 6, 1);
    pxa2xx_gpio_set(cpu->gpio, 7, 1);
    pxa2xx_gpio_set(cpu->gpio, 8, 1);
    pxa2xx_gpio_set(cpu->gpio, 9, 0);
    pxa2xx_gpio_set(cpu->gpio, 10, 1);
    pxa2xx_gpio_set(cpu->gpio, 11, 0);
    pxa2xx_gpio_set(cpu->gpio, 12, 0); /* <--- power switch, for hard reset :D */
    pxa2xx_gpio_set(cpu->gpio, 13, 0);
    pxa2xx_gpio_set(cpu->gpio, 14, 0);
    pxa2xx_gpio_set(cpu->gpio, 15, 0);
    pxa2xx_gpio_set(cpu->gpio, 18, 1);
    pxa2xx_gpio_set(cpu->gpio, 20, 1);
    pxa2xx_gpio_set(cpu->gpio, 23, 1);
    pxa2xx_gpio_set(cpu->gpio, 24, 1);
    pxa2xx_gpio_set(cpu->gpio, 26, 1);
    pxa2xx_gpio_set(cpu->gpio, 27, 0);
    pxa2xx_gpio_set(cpu->gpio, 28, 1);
    pxa2xx_gpio_set(cpu->gpio, 29, 0);
    pxa2xx_gpio_set(cpu->gpio, 34, 1);
    pxa2xx_gpio_set(cpu->gpio, 35, 1);
    pxa2xx_gpio_set(cpu->gpio, 37, 1);
    pxa2xx_gpio_set(cpu->gpio, 38, 1);
    pxa2xx_gpio_set(cpu->gpio, 39, 1);
    pxa2xx_gpio_set(cpu->gpio, 40, 0);
    pxa2xx_gpio_set(cpu->gpio, 42, 1);
    pxa2xx_gpio_set(cpu->gpio, 44, 1);
    pxa2xx_gpio_set(cpu->gpio, 46, 1);
    pxa2xx_gpio_set(cpu->gpio, 53, 0);
    pxa2xx_gpio_set(cpu->gpio, 56, 1);
    pxa2xx_gpio_set(cpu->gpio, 57, 0);
    pxa2xx_gpio_set(cpu->gpio, 80, 1);
    pxa2xx_gpio_set(cpu->gpio, 82, 1);
    pxa2xx_gpio_set(cpu->gpio, 86, 1);
    pxa2xx_gpio_set(cpu->gpio, 90, 1);
    pxa2xx_gpio_set(cpu->gpio, 95, 0);
    pxa2xx_gpio_set(cpu->gpio, 97, 0);
    pxa2xx_gpio_set(cpu->gpio, 100, 0);
    pxa2xx_gpio_set(cpu->gpio, 101, 0);
    pxa2xx_gpio_set(cpu->gpio, 102, 0);
    pxa2xx_gpio_set(cpu->gpio, 106, 0);
    pxa2xx_gpio_set(cpu->gpio, 107, 0);
    pxa2xx_gpio_set(cpu->gpio, 116, 0);
    pxa2xx_gpio_set(cpu->gpio, 119, 1);
    pxa2xx_gpio_set(cpu->gpio, 120, 1);

    /* Misc */
    pxa2xx_gpio_handler_set(cpu->gpio, LD_GPIO_BT1_PWR,
                    ld_btpwr1_switch, cpu);
    pxa2xx_gpio_handler_set(cpu->gpio, LD_GPIO_LCD1_PWR,
                    ld_lcdpwr1_switch, cpu);
    pxa2xx_gpio_handler_set(cpu->gpio, LD_GPIO_WLAN_PWR,
                    ld_wlanpwr_switch, cpu);
    pxa2xx_gpio_handler_set(cpu->gpio, LD_GPIO_GREEN_LED,
                    ld_greenled_switch, cpu);
    pxa2xx_gpio_handler_set(cpu->gpio, LD_GPIO_WLAN_RST,
                    ld_wlan_reset, cpu);
    pxa2xx_gpio_handler_set(cpu->gpio, LD_GPIO_BT2_PWR,
                    ld_btpwr2_switch, cpu);
    pxa2xx_gpio_handler_set(cpu->gpio, LD_GPIO_BL_PWR,
                    ld_blpwr_switch, cpu);
    pxa2xx_gpio_handler_set(cpu->gpio, LD_GPIO_UART_PWR,
                    ld_serialpwr_switch, cpu);
    pxa2xx_gpio_handler_set(cpu->gpio, LD_GPIO_ORANGE_LED,
                    ld_orangeled_switch, cpu);
    pxa2xx_gpio_handler_set(cpu->gpio, LD_GPIO_LCD2_PWR,
                    ld_lcdpwr2_switch, cpu);
    pxa2xx_gpio_handler_set(cpu->gpio, LD_GPIO_HDD_RST,
                    ld_hdd_reset, cpu);
    pxa2xx_gpio_handler_set(cpu->gpio, LD_GPIO_USB_PWR,
                    ld_usbpwr_switch, cpu);
    pxa2xx_gpio_handler_set(cpu->gpio, LD_GPIO_IR_PWR,
                    ld_irpwr_switch, cpu);
    pxa2xx_gpio_handler_set(cpu->gpio, LD_GPIO_HDD_PWR,
                    ld_hddpwr_switch, cpu);
}

/* Board init.  */

static void ld_init(int ram_size, int vga_ram_size, int boot_device,
                DisplayState *ds, const char **fd_filename, int snapshot,
                const char *kernel_filename, const char *kernel_cmdline,
                const char *initrd_filename)
{
    uint32_t ld_ram = 0x02000000;
    uint32_t ld_rom = 0x00080000;
    uint32_t ld_ram_int = 0x00040000;
    struct pxa2xx_state_s *cpu;

    cpu = pxa270_init(ds, "pxa270-c0");

    /* Setup memory */
    if (ram_size < ld_ram + ld_rom + ld_ram_int) {
        fprintf(stderr, "This platform requires %i bytes of memory\n",
                        ld_ram + ld_rom + ld_ram_int);
        exit(1);
    }
    cpu_register_physical_memory(PXA2XX_RAM_BASE, ld_ram, IO_MEM_RAM);

    cpu_register_physical_memory(0, ld_rom, ld_ram | IO_MEM_ROM);

    cpu_register_physical_memory(0x5c000000, 0x40000, (ld_ram + ld_rom) | IO_MEM_RAM);

    /* Setup peripherals */
    ld_gpio_setup(cpu);

    /* A 4.0 GB microdrive is permanently sitting in CF slot 0 */
    ld_microdrive_attach(cpu);

    /* Setup initial (reset) machine state */
    cpu->env->regs[15] = 0;
    //cpu->env->regs[15] = PXA2XX_RAM_BASE;

    memset(phys_ram_base, 0, ld_ram);
    memset(phys_ram_base + ld_ram, 0, ld_rom);
    load_image("brahma-bootrom", phys_ram_base + ld_ram);

    printf("XXX %x\n", phys_ram_base);
    //arm_load_kernel(cpu->env, ld_ram, kernel_filename, kernel_cmdline,
    //                initrd_filename, 909, PXA2XX_RAM_BASE);
    //                initrd_filename, 835, PXA2XX_RAM_BASE);
 
}

static void t650_init(int ram_size, int vga_ram_size, int boot_device,
                DisplayState *ds, const char **fd_filename, int snapshot,
                const char *kernel_filename, const char *kernel_cmdline,
                const char *initrd_filename)
{
    uint32_t t650_ram = 0x02000000;
    uint32_t t650_rom = 0x00080000;
    struct pxa2xx_state_s *cpu;

    cpu = pxa270_init(ds, "pxa270-c0");

    /* Setup memory */
    if (ram_size < t650_ram + t650_rom) {
        fprintf(stderr, "This platform requires %i bytes of memory\n",
                        t650_ram + t650_rom);
        exit(1);
    }
    cpu_register_physical_memory(PXA2XX_RAM_BASE, t650_ram, IO_MEM_RAM);

    cpu_register_physical_memory(0, t650_rom, t650_ram | IO_MEM_ROM);

    /* Setup peripherals */
    ld_gpio_setup(cpu); // FIXME: write t650 gpio func

    /* Setup initial (reset) machine state */
    //cpu->env->regs[15] = 0;
    cpu->env->regs[15] = PXA2XX_RAM_BASE;

    memset(phys_ram_base + t650_ram, 0, t650_rom);
    //load_image("../ace-bootrom", phys_ram_base + t650_ram);

    arm_load_kernel(cpu->env, t650_ram, kernel_filename, kernel_cmdline,
                    initrd_filename, 909, PXA2XX_RAM_BASE);
 
}


QEMUMachine palmld_machine = {
    "palmld",
    "Palm LifeDrive (PXA270)",
    ld_init,
};

QEMUMachine palmt650_machine = {
    "palmt650",
    "Palm Treo 650 (PXA270)",
    t650_init,
};
