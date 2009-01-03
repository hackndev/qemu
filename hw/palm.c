/*
 * Palm LifeDrive.
 *
 * Copyright (c) 2007 Andrzej Zaborowski  <balrog@zabor.org>
 *
 * This code is licensed under the GPLv2.
 */

#include "vl.h"

#define palm_printf(format, ...)	\
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
static void ld_gpio_switch(int line, int level, void *opaque)
{
    palm_printf("PalmLD GPIO %i is now %s.\n", line, level ? "HIGH" : "LOW");
}

static void tx_gpio_switch(int line, int level, void *opaque)
{
    palm_printf("PalmTX GPIO %i is now %s.\n", line, level ? "HIGH" : "LOW");
}

static void tc_gpio_switch(int line, int level, void *opaque)
{
    palm_printf("PalmTC GPIO %i is now %s.\n", line, level ? "HIGH" : "LOW");
}

static void ld_btpwr1_switch(int line, int level, void *opaque)
{
    palm_printf("Bluetooth powered %s (1).\n", level ? "up" : "down");
}

static void ld_lcdpwr1_switch(int line, int level, void *opaque)
{
    palm_printf("LCD powered %s (1).\n", level ? "up" : "down");
}

static void ld_wlanpwr_switch(int line, int level, void *opaque)
{
    palm_printf("WLAN powered %s.\n", level ? "up" : "down");
}

static void ld_greenled_switch(int line, int level, void *opaque)
{
    palm_printf("Green LED %s.\n", level ? "on" : "off");
}

static void ld_wlan_reset(int line, int level, void *opaque)
{
    palm_printf("WLAN %s reset state.\n", level ? "in" : "out of");
}

static void ld_btpwr2_switch(int line, int level, void *opaque)
{
    palm_printf("Bluetooth powered %s (2).\n", level ? "up" : "down");
}

static void ld_blpwr_switch(int line, int level, void *opaque)
{
    struct pxa2xx_state_s *cpu = opaque;

    palm_printf("%x LCD backlight %s.\n", cpu->env->regs[15], level ? "on" : "off");
}

static void ld_serialpwr_switch(int line, int level, void *opaque)
{
    palm_printf("Serial port powered %s.\n", level ? "up" : "down");
}

static void ld_orangeled_switch(int line, int level, void *opaque)
{
    palm_printf("Orange LED %s.\n", level ? "on" : "off");
}

static void ld_lcdpwr2_switch(int line, int level, void *opaque)
{
    palm_printf("LCD powered %s (2).\n", level ? "up" : "down");
}

static void ld_hdd_reset(int line, int level, void *opaque)
{
    palm_printf("HDD %s reset state.\n", level ? "in" : "out of");
}

static void ld_usbpwr_switch(int line, int level, void *opaque)
{
    palm_printf("(possibly) USB powered %s.\n", level ? "up" : "down");
}

static void ld_irpwr_switch(int line, int level, void *opaque)
{
    palm_printf("Infrared powered %s.\n", level ? "down" : "up");
}

static void ld_hddpwr_switch(int line, int level, void *opaque)
{
    palm_printf("HDD powered %s.\n", level ? "up" : "down");
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

static void tx_pcmcia_cb(void *opaque, int line, int level)
{
    struct pxa2xx_state_s *cpu = (struct pxa2xx_state_s *)opaque;
}

static void tc_pcmcia_cb(void *opaque, int line, int level)
{
    struct pxa2xx_state_s *cpu = (struct pxa2xx_state_s *)opaque;
}

static void ld_gpio_setup(struct pxa2xx_state_s *cpu)
{
    int g;
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
    pxa2xx_gpio_set(cpu->gpio, 10, 0); /* hotsync, deassert for recovery console */
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
    pxa2xx_gpio_set(cpu->gpio, 104, 0);
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

/* Uncomment this to monitor all GPIOs */
/*    for (g=0;g<=120;g++)
    pxa2xx_gpio_handler_set(cpu->gpio, g,
                    ld_gpio_switch, cpu);
*/
}

static void tx_gpio_setup(struct pxa2xx_state_s *cpu)
{
    int g;
    qemu_irq *pcmcia_cb;

    /* PCMCIA signals: card's IRQ and Card-Detect*/
    pcmcia_cb = qemu_allocate_irqs(tx_pcmcia_cb, cpu, 2);
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
    pxa2xx_gpio_set(cpu->gpio, 10, 1); /* hotsync, deassert for recovery console */
    pxa2xx_gpio_set(cpu->gpio, 11, 0);
    pxa2xx_gpio_set(cpu->gpio, 12, 0); /* <--- power switch, for hard reset :D */
    pxa2xx_gpio_set(cpu->gpio, 13, 1);
    pxa2xx_gpio_set(cpu->gpio, 14, 1);
    pxa2xx_gpio_set(cpu->gpio, 15, 1);
    pxa2xx_gpio_set(cpu->gpio, 16, 1);
    pxa2xx_gpio_set(cpu->gpio, 17, 1);
    pxa2xx_gpio_set(cpu->gpio, 18, 1);
    pxa2xx_gpio_set(cpu->gpio, 19, 1);
    pxa2xx_gpio_set(cpu->gpio, 20, 0);
    pxa2xx_gpio_set(cpu->gpio, 21, 0);
    pxa2xx_gpio_set(cpu->gpio, 22, 0);
    pxa2xx_gpio_set(cpu->gpio, 23, 0);
    pxa2xx_gpio_set(cpu->gpio, 24, 1);
    pxa2xx_gpio_set(cpu->gpio, 25, 0);
    pxa2xx_gpio_set(cpu->gpio, 26, 1);
    pxa2xx_gpio_set(cpu->gpio, 27, 0);
    pxa2xx_gpio_set(cpu->gpio, 28, 1);
    pxa2xx_gpio_set(cpu->gpio, 29, 0);
    pxa2xx_gpio_set(cpu->gpio, 30, 0);
    pxa2xx_gpio_set(cpu->gpio, 31, 0);

    pxa2xx_gpio_set(cpu->gpio, 32, 0);
    pxa2xx_gpio_set(cpu->gpio, 33, 0);
    pxa2xx_gpio_set(cpu->gpio, 34, 1);
    pxa2xx_gpio_set(cpu->gpio, 35, 1);
    pxa2xx_gpio_set(cpu->gpio, 36, 0);
    pxa2xx_gpio_set(cpu->gpio, 37, 1);
    pxa2xx_gpio_set(cpu->gpio, 38, 0);
    pxa2xx_gpio_set(cpu->gpio, 39, 1);
    pxa2xx_gpio_set(cpu->gpio, 40, 1);
    pxa2xx_gpio_set(cpu->gpio, 41, 1);
    pxa2xx_gpio_set(cpu->gpio, 42, 1);
    pxa2xx_gpio_set(cpu->gpio, 43, 1);
    pxa2xx_gpio_set(cpu->gpio, 44, 1);
    pxa2xx_gpio_set(cpu->gpio, 45, 1);
    pxa2xx_gpio_set(cpu->gpio, 46, 1);
    pxa2xx_gpio_set(cpu->gpio, 47, 0);
    pxa2xx_gpio_set(cpu->gpio, 48, 1);
    pxa2xx_gpio_set(cpu->gpio, 49, 1);
    pxa2xx_gpio_set(cpu->gpio, 50, 1);
    pxa2xx_gpio_set(cpu->gpio, 51, 1);
    pxa2xx_gpio_set(cpu->gpio, 52, 0);
    pxa2xx_gpio_set(cpu->gpio, 53, 0);
    pxa2xx_gpio_set(cpu->gpio, 54, 0);
    pxa2xx_gpio_set(cpu->gpio, 55, 1);
    pxa2xx_gpio_set(cpu->gpio, 56, 0);
    pxa2xx_gpio_set(cpu->gpio, 57, 0);
    pxa2xx_gpio_set(cpu->gpio, 58, 1);
    pxa2xx_gpio_set(cpu->gpio, 59, 1);
    pxa2xx_gpio_set(cpu->gpio, 60, 1);
    pxa2xx_gpio_set(cpu->gpio, 61, 1);
    pxa2xx_gpio_set(cpu->gpio, 62, 1);
    pxa2xx_gpio_set(cpu->gpio, 63, 1);

    pxa2xx_gpio_set(cpu->gpio, 64, 1);
    pxa2xx_gpio_set(cpu->gpio, 65, 1);
    pxa2xx_gpio_set(cpu->gpio, 66, 1);
    pxa2xx_gpio_set(cpu->gpio, 67, 1);
    pxa2xx_gpio_set(cpu->gpio, 68, 1);
    pxa2xx_gpio_set(cpu->gpio, 69, 1);
    pxa2xx_gpio_set(cpu->gpio, 70, 1);
    pxa2xx_gpio_set(cpu->gpio, 71, 1);
    pxa2xx_gpio_set(cpu->gpio, 72, 1);
    pxa2xx_gpio_set(cpu->gpio, 73, 1);
    pxa2xx_gpio_set(cpu->gpio, 74, 1);
    pxa2xx_gpio_set(cpu->gpio, 75, 1);
    pxa2xx_gpio_set(cpu->gpio, 76, 1);
    pxa2xx_gpio_set(cpu->gpio, 77, 1);
    pxa2xx_gpio_set(cpu->gpio, 78, 0);
    pxa2xx_gpio_set(cpu->gpio, 79, 1);
    pxa2xx_gpio_set(cpu->gpio, 80, 0);
    pxa2xx_gpio_set(cpu->gpio, 81, 1);
    pxa2xx_gpio_set(cpu->gpio, 82, 1);
    pxa2xx_gpio_set(cpu->gpio, 83, 0);
    pxa2xx_gpio_set(cpu->gpio, 84, 1);
    pxa2xx_gpio_set(cpu->gpio, 85, 0);
    pxa2xx_gpio_set(cpu->gpio, 86, 1);
    pxa2xx_gpio_set(cpu->gpio, 87, 0);
    pxa2xx_gpio_set(cpu->gpio, 88, 0);
    pxa2xx_gpio_set(cpu->gpio, 89, 0);
    pxa2xx_gpio_set(cpu->gpio, 90, 0);
    pxa2xx_gpio_set(cpu->gpio, 91, 0);
    pxa2xx_gpio_set(cpu->gpio, 92, 0);
    pxa2xx_gpio_set(cpu->gpio, 93, 0);
    pxa2xx_gpio_set(cpu->gpio, 94, 0);
    pxa2xx_gpio_set(cpu->gpio, 95, 0);

    pxa2xx_gpio_set(cpu->gpio, 96, 1);
    pxa2xx_gpio_set(cpu->gpio, 97, 0);
    pxa2xx_gpio_set(cpu->gpio, 98, 0);
    pxa2xx_gpio_set(cpu->gpio, 99, 0);
    pxa2xx_gpio_set(cpu->gpio, 100, 0);
    pxa2xx_gpio_set(cpu->gpio, 101, 0);
    pxa2xx_gpio_set(cpu->gpio, 102, 0);
    pxa2xx_gpio_set(cpu->gpio, 103, 1);
    pxa2xx_gpio_set(cpu->gpio, 104, 1);
    pxa2xx_gpio_set(cpu->gpio, 105, 1);
    pxa2xx_gpio_set(cpu->gpio, 106, 0);
    pxa2xx_gpio_set(cpu->gpio, 107, 0);
    pxa2xx_gpio_set(cpu->gpio, 108, 0);
    pxa2xx_gpio_set(cpu->gpio, 109, 0);
    pxa2xx_gpio_set(cpu->gpio, 110, 0);
    pxa2xx_gpio_set(cpu->gpio, 111, 0);
    pxa2xx_gpio_set(cpu->gpio, 112, 0);
    pxa2xx_gpio_set(cpu->gpio, 113, 1);
    pxa2xx_gpio_set(cpu->gpio, 114, 1);
    pxa2xx_gpio_set(cpu->gpio, 115, 1);
    pxa2xx_gpio_set(cpu->gpio, 116, 0);
    pxa2xx_gpio_set(cpu->gpio, 117, 0);
    pxa2xx_gpio_set(cpu->gpio, 118, 0);
    pxa2xx_gpio_set(cpu->gpio, 119, 0);
    pxa2xx_gpio_set(cpu->gpio, 120, 0);

    for (g=0;g<=120;g++)
    pxa2xx_gpio_handler_set(cpu->gpio, g,
                    tx_gpio_switch, cpu);

}

static void tc_gpio_setup(struct pxa2xx_state_s *cpu)
{
    qemu_irq *pcmcia_cb;
    int g;

    /* PCMCIA signals: card's IRQ and Card-Detect*/
    pcmcia_cb = qemu_allocate_irqs(tc_pcmcia_cb, cpu, 2);
    pxa2xx_pcmcia_set_irq_cb(cpu->pcmcia[0], pcmcia_cb[0], pcmcia_cb[1]);

    /* Input pins levels */
    pxa2xx_gpio_set(cpu->gpio, 0, 1);
    pxa2xx_gpio_set(cpu->gpio, 1, 0);
    pxa2xx_gpio_set(cpu->gpio, 2, 1);
    pxa2xx_gpio_set(cpu->gpio, 3, 0);
    pxa2xx_gpio_set(cpu->gpio, 4, 1);
    pxa2xx_gpio_set(cpu->gpio, 5, 0);
    pxa2xx_gpio_set(cpu->gpio, 6, 1);
    pxa2xx_gpio_set(cpu->gpio, 7, 1);
    pxa2xx_gpio_set(cpu->gpio, 8, 1);
    pxa2xx_gpio_set(cpu->gpio, 9, 1);
    pxa2xx_gpio_set(cpu->gpio, 10, 1);
    pxa2xx_gpio_set(cpu->gpio, 11, 0);
    pxa2xx_gpio_set(cpu->gpio, 12, 0);
    pxa2xx_gpio_set(cpu->gpio, 13, 0);
    pxa2xx_gpio_set(cpu->gpio, 14, 0);
    pxa2xx_gpio_set(cpu->gpio, 15, 0);
    pxa2xx_gpio_set(cpu->gpio, 16, 1);
    pxa2xx_gpio_set(cpu->gpio, 17, 0);
    pxa2xx_gpio_set(cpu->gpio, 18, 0);
    pxa2xx_gpio_set(cpu->gpio, 19, 0);
    pxa2xx_gpio_set(cpu->gpio, 20, 0);
    pxa2xx_gpio_set(cpu->gpio, 21, 0);
    pxa2xx_gpio_set(cpu->gpio, 22, 0);
    pxa2xx_gpio_set(cpu->gpio, 23, 0);
    pxa2xx_gpio_set(cpu->gpio, 24, 0);
    pxa2xx_gpio_set(cpu->gpio, 25, 0);
    pxa2xx_gpio_set(cpu->gpio, 26, 0);
    pxa2xx_gpio_set(cpu->gpio, 27, 0);
    pxa2xx_gpio_set(cpu->gpio, 28, 1);
    pxa2xx_gpio_set(cpu->gpio, 29, 0);
    pxa2xx_gpio_set(cpu->gpio, 30, 0);
    pxa2xx_gpio_set(cpu->gpio, 31, 0);

    pxa2xx_gpio_set(cpu->gpio, 32, 1);
    pxa2xx_gpio_set(cpu->gpio, 33, 0);
    pxa2xx_gpio_set(cpu->gpio, 34, 1);
    pxa2xx_gpio_set(cpu->gpio, 35, 1);
    pxa2xx_gpio_set(cpu->gpio, 36, 0);
    pxa2xx_gpio_set(cpu->gpio, 37, 0);
    pxa2xx_gpio_set(cpu->gpio, 38, 1);
    pxa2xx_gpio_set(cpu->gpio, 39, 1);
    pxa2xx_gpio_set(cpu->gpio, 40, 1);
    pxa2xx_gpio_set(cpu->gpio, 41, 1);
    pxa2xx_gpio_set(cpu->gpio, 42, 1);
    pxa2xx_gpio_set(cpu->gpio, 43, 1);
    pxa2xx_gpio_set(cpu->gpio, 44, 1);
    pxa2xx_gpio_set(cpu->gpio, 45, 0);
    pxa2xx_gpio_set(cpu->gpio, 46, 1);
    pxa2xx_gpio_set(cpu->gpio, 47, 0);
    pxa2xx_gpio_set(cpu->gpio, 48, 1);
    pxa2xx_gpio_set(cpu->gpio, 49, 1);
    pxa2xx_gpio_set(cpu->gpio, 50, 1);
    pxa2xx_gpio_set(cpu->gpio, 51, 1);
    pxa2xx_gpio_set(cpu->gpio, 52, 1);
    pxa2xx_gpio_set(cpu->gpio, 53, 1);
    pxa2xx_gpio_set(cpu->gpio, 54, 0);
    pxa2xx_gpio_set(cpu->gpio, 55, 1);
    pxa2xx_gpio_set(cpu->gpio, 56, 0);
    pxa2xx_gpio_set(cpu->gpio, 57, 0);
    pxa2xx_gpio_set(cpu->gpio, 58, 0);
    pxa2xx_gpio_set(cpu->gpio, 59, 0);
    pxa2xx_gpio_set(cpu->gpio, 60, 0);
    pxa2xx_gpio_set(cpu->gpio, 61, 0);
    pxa2xx_gpio_set(cpu->gpio, 62, 0);
    pxa2xx_gpio_set(cpu->gpio, 63, 0);

    pxa2xx_gpio_set(cpu->gpio, 64, 0);
    pxa2xx_gpio_set(cpu->gpio, 65, 0);
    pxa2xx_gpio_set(cpu->gpio, 66, 0);
    pxa2xx_gpio_set(cpu->gpio, 67, 0);
    pxa2xx_gpio_set(cpu->gpio, 68, 0);
    pxa2xx_gpio_set(cpu->gpio, 69, 0);
    pxa2xx_gpio_set(cpu->gpio, 70, 0);
    pxa2xx_gpio_set(cpu->gpio, 71, 0);
    pxa2xx_gpio_set(cpu->gpio, 72, 0);
    pxa2xx_gpio_set(cpu->gpio, 73, 0);
    pxa2xx_gpio_set(cpu->gpio, 74, 1);
    pxa2xx_gpio_set(cpu->gpio, 75, 1);
    pxa2xx_gpio_set(cpu->gpio, 76, 0);
    pxa2xx_gpio_set(cpu->gpio, 77, 1);
    pxa2xx_gpio_set(cpu->gpio, 78, 0);
    pxa2xx_gpio_set(cpu->gpio, 79, 0);
    pxa2xx_gpio_set(cpu->gpio, 80, 0);
    pxa2xx_gpio_set(cpu->gpio, 81, 1);
    pxa2xx_gpio_set(cpu->gpio, 82, 1);
    pxa2xx_gpio_set(cpu->gpio, 83, 1);
    pxa2xx_gpio_set(cpu->gpio, 84, 1);
    pxa2xx_gpio_set(cpu->gpio, 85, 1);
    pxa2xx_gpio_set(cpu->gpio, 86, 1);
    pxa2xx_gpio_set(cpu->gpio, 87, 1);
    pxa2xx_gpio_set(cpu->gpio, 88, 1);
    pxa2xx_gpio_set(cpu->gpio, 89, 1);
    pxa2xx_gpio_set(cpu->gpio, 90, 0);
    pxa2xx_gpio_set(cpu->gpio, 91, 0);
    pxa2xx_gpio_set(cpu->gpio, 92, 0);
    pxa2xx_gpio_set(cpu->gpio, 93, 0);
    pxa2xx_gpio_set(cpu->gpio, 94, 0);
    pxa2xx_gpio_set(cpu->gpio, 95, 0);

    pxa2xx_gpio_set(cpu->gpio, 96, 1);
    pxa2xx_gpio_set(cpu->gpio, 97, 1);
    pxa2xx_gpio_set(cpu->gpio, 98, 1);
    pxa2xx_gpio_set(cpu->gpio, 99, 0);
    pxa2xx_gpio_set(cpu->gpio, 100, 1);
    pxa2xx_gpio_set(cpu->gpio, 101, 0);
    pxa2xx_gpio_set(cpu->gpio, 102, 1);
    pxa2xx_gpio_set(cpu->gpio, 103, 1);
    pxa2xx_gpio_set(cpu->gpio, 104, 1);
    pxa2xx_gpio_set(cpu->gpio, 105, 1);
    pxa2xx_gpio_set(cpu->gpio, 106, 1);
    pxa2xx_gpio_set(cpu->gpio, 107, 0);
    pxa2xx_gpio_set(cpu->gpio, 108, 0);
    pxa2xx_gpio_set(cpu->gpio, 109, 0);
    pxa2xx_gpio_set(cpu->gpio, 110, 0);
    pxa2xx_gpio_set(cpu->gpio, 111, 0);
    pxa2xx_gpio_set(cpu->gpio, 112, 1);
    pxa2xx_gpio_set(cpu->gpio, 113, 0);
    pxa2xx_gpio_set(cpu->gpio, 114, 0);
    pxa2xx_gpio_set(cpu->gpio, 115, 0);
    pxa2xx_gpio_set(cpu->gpio, 116, 0);
    pxa2xx_gpio_set(cpu->gpio, 117, 0);
    pxa2xx_gpio_set(cpu->gpio, 118, 0);
    pxa2xx_gpio_set(cpu->gpio, 119, 0);
    pxa2xx_gpio_set(cpu->gpio, 120, 0);

    for (g=0;g<=120;g++)
    pxa2xx_gpio_handler_set(cpu->gpio, g,
                    tc_gpio_switch, cpu);

}

/*****
 * Hacky AC97 controller code. This is just enough to trick the OS into
 * thinking there's a WM9712 attached to the LD
 * we should write proper pxa2xx_ac97.c device.
 */

#define GSR     0x1c

uint16_t pac_reg[63];

static void ac97_init()
{
    pac_reg[0x1c>>1] = 0x8000; /* Record Gain */

    pac_reg[0x7c>>1] = 0x574d; /* Vendor ID1: 'W' 'M' */
    pac_reg[0x7e>>1] = 0x4c12; /* Vendor ID2: 'L' 12 */

}

static uint32_t ac97_read(void *opaque, target_phys_addr_t offset)
{
    int reg;
    offset &= 0xfff;

    if (offset > 0x200) { /* primary audio codec register */
        reg = (offset - 0x200) >> 1;
        printf("q: Primary audio codec reg: %x\n", reg); 
        return pac_reg[reg>>1];
    }


    switch(offset) {
    case 0x1c:
        return (1 << 19) | (1 << 18); // CDONE | SDONE
        break;
    default:
        printf("q: AC97 read from offset: %x\n", offset);
    }

    return 0x1234578;
}

static void ac97_write(void *opaque,
                target_phys_addr_t offset, uint32_t value)
{
    int reg;
    offset &= 0xfff;
    if (offset > 0x200) { /* primary audio codec register */
        reg = (offset - 0x200) >> 1;
        printf("q: Primary audio codec write: %x := %x\n", reg, value);
        pac_reg[reg>>1] = value & 0xffff;
        return;
    }
    printf("q: AC97 %x := %x\n", offset, value);
}

static CPUReadMemoryFunc *ac97_readfn[] = {
    ac97_read,
    ac97_read,
    ac97_read
};

static CPUWriteMemoryFunc *ac97_writefn[] = {
    ac97_write,
    ac97_write,
    ac97_write
};


/*****
 * Hacky keypad controller code. This is to initiate a hard reset on the LD
 * we should write proper pxa2xx_keypad.c device.
 */
uint32_t key_reg[14];
#define KPC 0
static uint32_t key_read(void *opaque, target_phys_addr_t offset)
{
    offset &= 0xfff;

    uint32_t ret =  key_reg[offset>>2];
    printf("q: keypad read from offset: %x (%x)\n", offset, ret);
    return ret;

}

static void key_write(void *opaque,
                target_phys_addr_t offset, uint32_t value)
{
    static int waithack=0;
    struct pxa2xx_state_s *cpu = (struct pxa2xx_state_s *)opaque;

    offset &= 0xfff;
    printf("q: keypad %x := %x\n", offset, value);
    key_reg[offset>>2] = value;
    
    if (offset == 0) { // KPC
    	if (value & (1<<15)) { // manual scan column 2
		printf("NAV UP!\n");
		waithack++;
		if (waithack > 20 && waithack < 40 && 0) {
    			pxa2xx_gpio_set(cpu->gpio, 12, 0); 
			printf("*******\n");
		} else if (waithack > 40 || 1) {
			key_reg[0x18>>2] = 1<<0; // nav-up
		}
	} else {
		key_reg[0x18>>2] = 0; // nav-up
	}

    }


}

static CPUReadMemoryFunc *key_readfn[] = {
    key_read,
    key_read,
    key_read
};

static CPUWriteMemoryFunc *key_writefn[] = {
    key_write,
    key_write,
    key_write
};


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

    cpu = pxa270_init(ld_ram, ds, "pxa270-c0");

    /* Setup memory */
    if (ram_size < ld_ram + ld_rom + ld_ram_int) {
        fprintf(stderr, "This platform requires %i bytes of memory\n",
                        ld_ram + ld_rom + ld_ram_int);
        exit(1);
    }
    cpu_register_physical_memory(PXA2XX_SDRAM_BASE, ld_ram, IO_MEM_RAM);

    cpu_register_physical_memory(0, ld_rom, ld_ram | IO_MEM_ROM);

    cpu_register_physical_memory(0x5c000000, 0x40000, (ld_ram + ld_rom) | IO_MEM_RAM);

    int iomemtype = cpu_register_io_memory(0, ac97_readfn,
                    ac97_writefn, NULL);
    cpu_register_physical_memory(0x40500000, 0x00000fff, iomemtype);

    iomemtype = cpu_register_io_memory(0, key_readfn,
                    key_writefn, cpu);
    cpu_register_physical_memory(0x41500000, 0x00000fff, iomemtype);


    ac97_init();

    /* Setup peripherals */
    ld_gpio_setup(cpu);

    /* A 4.0 GB microdrive is permanently sitting in CF slot 0 */
    ld_microdrive_attach(cpu);

    /* Setup initial (reset) machine state */
    cpu->env->regs[15] = 0;
    //cpu->env->regs[15] = PXA2XX_SDRAM_BASE;

    memset(phys_ram_base, 0, ld_ram);
    memset(phys_ram_base + ld_ram, 0, ld_rom);
    load_image("brahma-bootrom", phys_ram_base + ld_ram);

    //arm_load_kernel(cpu->env, ld_ram, kernel_filename, kernel_cmdline,
    //                initrd_filename, 835, PXA2XX_SDRAM_BASE);
 
}

static void t650_init(int ram_size, int vga_ram_size, int boot_device,
                DisplayState *ds, const char **fd_filename, int snapshot,
                const char *kernel_filename, const char *kernel_cmdline,
                const char *initrd_filename)
{
    uint32_t t650_ram = 0x02000000;
    uint32_t t650_rom = 0x00001000;
    uint32_t t650_ram_int = 0x00040000;
    struct pxa2xx_state_s *cpu;

    cpu = pxa270_init(t650_ram, ds, "pxa270-c0");

    /* Setup memory */
    if (ram_size < t650_ram + t650_rom + t650_ram_int) {
        fprintf(stderr, "This platform requires %i bytes of memory\n",
                        t650_ram + t650_rom);
        exit(1);
    }
    cpu_register_physical_memory(PXA2XX_SDRAM_BASE, t650_ram, IO_MEM_RAM);

    cpu_register_physical_memory(0, 0x800, t650_ram | IO_MEM_ROM);

    cpu_register_physical_memory(0x5c000000, 0x40000, (t650_ram + t650_rom) | IO_MEM_RAM);
    /* Setup peripherals */
    ld_gpio_setup(cpu); // FIXME: write t650 gpio func

    /* Setup initial (reset) machine state */
    cpu->env->regs[15] = 0;
    //cpu->env->regs[15] = PXA2XX_SDRAM_BASE;
    
    mdoc_init();

    //if (bdrv_read(mtd_bdrv, 0, phys_ram_base + t650_ram, 4) == -1)
    //    printf("%s: error reading boot block\n", __FUNCTION__);


    //memset(phys_ram_base + t650_ram, 0, t650_rom);
    load_image("palmt650.rom", phys_ram_base + t650_ram);

    //arm_load_kernel(cpu->env, t650_ram, kernel_filename, kernel_cmdline,
    //                initrd_filename, 909, PXA2XX_SDRAM_BASE);
 
}

static void tc_init(int ram_size, int vga_ram_size, int boot_device,
                DisplayState *ds, const char **fd_filename, int snapshot,
                const char *kernel_filename, const char *kernel_cmdline,
                const char *initrd_filename)
{
    uint32_t tc_ram = 0x04000000;
    uint32_t tc_rom = 0x01000000;
    struct pxa2xx_state_s *cpu;

    cpu = pxa255_init(tc_ram, ds);

    /* Setup memory */
    if (ram_size < tc_ram + tc_rom) {
        fprintf(stderr, "This platform requires %i bytes of memory\n",
                        tc_ram + tc_rom);
        exit(1);
    }
    cpu_register_physical_memory(PXA2XX_SDRAM_BASE, tc_ram, IO_MEM_RAM);

    cpu_register_physical_memory(0, tc_rom, tc_ram | IO_MEM_ROM);

    int iomemtype = cpu_register_io_memory(0, ac97_readfn,
                    ac97_writefn, NULL);
    cpu_register_physical_memory(0x40500000, 0x00000fff, iomemtype);

    iomemtype = cpu_register_io_memory(0, key_readfn,
                    key_writefn, cpu);
    cpu_register_physical_memory(0x41500000, 0x00000fff, iomemtype);


    ac97_init();

    /* Setup peripherals */
    tc_gpio_setup(cpu);

    /* Setup initial (reset) machine state */
    cpu->env->regs[15] = 0;
//    cpu->env->regs[15] = PXA2XX_SDRAM_BASE;

    memset(phys_ram_base, 0, tc_ram);
    memset(phys_ram_base + tc_ram, 0, tc_rom);
    load_image("../../../BOOTROM/palmtc.rom", phys_ram_base + tc_ram);

    arm_load_kernel(cpu->env, tc_ram, kernel_filename, kernel_cmdline,
            initrd_filename, 918 /* THIS IS ARM_ID!! */, PXA2XX_SDRAM_BASE);
 
}

static void tx_init(int ram_size, int vga_ram_size, int boot_device,
                DisplayState *ds, const char **fd_filename, int snapshot,
                const char *kernel_filename, const char *kernel_cmdline,
                const char *initrd_filename)
{
    uint32_t tx_ram = 0x02000000;
    uint32_t tx_rom = 0x02000000;
    uint32_t tx_ram_int = 0x00040000;
    struct pxa2xx_state_s *cpu;

    cpu = pxa270_init(tx_ram, ds, "pxa270-c5");

    /* Setup memory */
    if (ram_size < tx_ram + tx_rom + tx_ram_int) {
        fprintf(stderr, "This platform requires %i bytes of memory\n",
                        tx_ram + tx_rom + tx_ram_int);
        exit(1);
    }
    cpu_register_physical_memory(PXA2XX_SDRAM_BASE, tx_ram, IO_MEM_RAM);

    cpu_register_physical_memory(0, tx_rom, tx_ram | IO_MEM_ROM);

    cpu_register_physical_memory(0x5c000000, 0x40000, (tx_ram + tx_rom) | IO_MEM_RAM);

    int iomemtype = cpu_register_io_memory(0, ac97_readfn,
                    ac97_writefn, NULL);
    cpu_register_physical_memory(0x40500000, 0x00000fff, iomemtype);

    iomemtype = cpu_register_io_memory(0, key_readfn,
                    key_writefn, cpu);
    cpu_register_physical_memory(0x41500000, 0x00000fff, iomemtype);


    ac97_init();

    /* Setup peripherals */
    tx_gpio_setup(cpu);

    /* Setup initial (reset) machine state */
    cpu->env->regs[15] = 0;
//    cpu->env->regs[15] = PXA2XX_SDRAM_BASE;

    memset(phys_ram_base, 0, tx_ram);
    memset(phys_ram_base + tx_ram, 0, tx_rom);
    load_image("../../../BOOTROM/palmtx.rom", phys_ram_base + tx_ram);

    arm_load_kernel(cpu->env, tx_ram, kernel_filename, kernel_cmdline,
                    initrd_filename, 885, PXA2XX_SDRAM_BASE);
 
}


QEMUMachine palmtc_machine = {
    "palmtc",
    "Palm Tungsten|C (PXA255)",
    tc_init,
};

QEMUMachine palmtx_machine = {
    "palmtx",
    "Palm TX (PXA270)",
    tx_init,
};

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
