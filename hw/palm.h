#ifndef _PALM_H
#define _PALM_H

#define ld_printf(format, ...)  \
    fprintf(stderr, "%s: " format, __FUNCTION__, ##__VA_ARGS__)
    
#define LD_GPIO_BT1_PWR         17
#define LD_GPIO_LCD1_PWR        19
#define LD_GPIO_WLAN_PWR        36
#define LD_GPIO_GREEN_LED       52
#define LD_GPIO_WLAN_RST        81
#define LD_GPIO_BT2_PWR         83
#define LD_GPIO_BL_PWR          84
#define LD_GPIO_UART_PWR        91
#define LD_GPIO_ORANGE_LED      94
#define LD_GPIO_HDD_IRQ         95
#define LD_GPIO_LCD2_PWR        96
#define LD_GPIO_HDD_RST         98
#define LD_GPIO_USB_PWR         99
#define LD_GPIO_IR_PWR          108
#define LD_GPIO_HDD_PWR         115

/* Other peripherals */

static void tc_gpio_switch(int line, int level, void *opaque)
{
    ld_printf("PalmTC GPIO %i is now %s.\n", line, level ? "HIGH" : "LOW");
}

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

static void tc_gpio_setup(struct pxa2xx_state_s *cpu)
{
    qemu_irq *pcmcia_cb;
    int g;

    /* PCMCIA signals: card's IRQ and Card-Detect*/
    pcmcia_cb = qemu_allocate_irqs(ld_pcmcia_cb, cpu, 2);
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

    for (g=0;g<=84;g++)
    pxa2xx_gpio_handler_set(cpu->gpio, g,
                    tc_gpio_switch, cpu);

}

#endif				/* _PALM_H */
