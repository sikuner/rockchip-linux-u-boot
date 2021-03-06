/*
 * (C) Copyright 2017 Rockchip Electronics Co., Ltd
 *
 * SPDX-License-Identifier:     GPL-2.0+
 */

#ifndef _ROCKCHIP_PLAT_IRQ_H_
#define _ROCKCHIP_PLAT_IRQ_H_

#if defined(CONFIG_ROCKCHIP_RK3128)
#define GPIO0_PHYS			0x2007C000
#define GPIO1_PHYS			0x20080000
#define GPIO2_PHYS			0x20084000
#define GPIO3_PHYS			0x20088000

#define GIC_IRQS_NR			(4 * 32)
#define GPIO_IRQS_NR			(4 * 32)

#define GPIO_BANK_NUM			4
#define GPIO_BANK_PINS			32

#define IRQ_TIMER1			61
#define IRQ_GPIO0			68
#define IRQ_GPIO1			69
#define IRQ_GPIO2			79
#define IRQ_GPIO3			71

#elif defined(CONFIG_ROCKCHIP_RK322X)
#define GPIO0_PHYS			0x11110000
#define GPIO1_PHYS			0x11120000
#define GPIO2_PHYS			0x11130000
#define GPIO3_PHYS			0x11140000

#define GIC_IRQS_NR			(4 * 32)
#define GPIO_IRQS_NR			(4 * 32)

#define GPIO_BANK_NUM			4
#define GPIO_BANK_PINS			32

#define IRQ_TIMER1			76
#define IRQ_GPIO0			83
#define IRQ_GPIO1			84
#define IRQ_GPIO2			85
#define IRQ_GPIO3			86

#elif defined(CONFIG_ROCKCHIP_RK3288)
#define GPIO0_PHYS			0xFF750000
#define GPIO1_PHYS			0xFF780000
#define GPIO2_PHYS			0xFF790000
#define GPIO3_PHYS			0xFF7A0000
#define GPIO4_PHYS			0xFF7B0000
#define GPIO5_PHYS			0xFF7C0000
#define GPIO6_PHYS			0xFF7D0000
#define GPIO7_PHYS			0xFF7E0000
#define GPIO8_PHYS			0xFF7F0000

#define GIC_IRQS_NR			(5 * 32)
#define GPIO_IRQS_NR			(9 * 32)

#define GPIO_BANK_NUM			9
#define GPIO_BANK_PINS			32

#define IRQ_TIMER1			99
#define IRQ_GPIO0			113
#define IRQ_GPIO1			114
#define IRQ_GPIO2			115
#define IRQ_GPIO3			116
#define IRQ_GPIO4			117
#define IRQ_GPIO5			118
#define IRQ_GPIO6			119
#define IRQ_GPIO7			120
#define IRQ_GPIO8			121

#elif defined(CONFIG_ROCKCHIP_RK3328)
#define	GPIO0_PHYS			0xFF210000
#define	GPIO1_PHYS			0xFF220000
#define	GPIO2_PHYS			0xFF230000
#define	GPIO3_PHYS			0xFF240000

#define GIC_IRQS_NR			(4 * 32)
#define GPIO_IRQS_NR			(4 * 32)

#define GPIO_BANK_NUM			4
#define GPIO_BANK_PINS			32

#define IRQ_TIMER1			76
#define IRQ_GPIO0			83
#define IRQ_GPIO1			84
#define IRQ_GPIO2			85
#define IRQ_GPIO3			86

#elif defined(CONFIG_ROCKCHIP_RK3368)
#define GPIO0_PHYS			0xFF750000
#define GPIO1_PHYS			0xFF780000
#define GPIO2_PHYS			0xFF790000
#define GPIO3_PHYS			0xFF7A0000

#define GIC_IRQS_NR                     (5 * 32)
#define GPIO_IRQS_NR                    (4 * 32)

#define GPIO_BANK_NUM			4
#define GPIO_BANK_PINS			32

#define IRQ_TIMER1			79
#define IRQ_GPIO0			113
#define IRQ_GPIO1			114
#define IRQ_GPIO2			115
#define IRQ_GPIO3			116

#elif defined(CONFIG_ROCKCHIP_RK3399)
#define GPIO0_PHYS			0xFF720000
#define GPIO1_PHYS			0xFF730000
#define GPIO2_PHYS			0xFF780000
#define GPIO3_PHYS			0xFF788000
#define GPIO4_PHYS			0xFF790000

#define IRQ_GPIO0			46
#define IRQ_GPIO1			47
#define IRQ_GPIO2			48
#define IRQ_GPIO3			49
#define IRQ_GPIO4			50
#define IRQ_TIMER1			114	/* non-secure */

#define GIC_IRQS_NR			(6 * 32)
#define GPIO_IRQS_NR			(5 * 32)

#define GPIO_BANK_NUM			5
#define GPIO_BANK_PINS			32
#else
"Missing define RIQ relative things"
#endif

#endif /* _ROCKCHIP_PLAT_IRQ_H_ */
