#ifndef __GPIO_H__
#define __GPIO_H__

#include <stdint.h>

#define GPIO_BASE 0x0008C000

#define GPIO_DIR(PORT) (*(volatile uint8_t *)(GPIO_BASE + PORT))
#define GPIO_SET(PORT) (*(volatile uint8_t *)(GPIO_BASE + 0x20 + PORT))
#define GPIO_OUTPUT 0x1
#define GPIO_INPUT 0x0

#define GPIO_PORT0 0x0
#define GPIO_PORT1 0x1
#define GPIO_PORT2 0x2
#define GPIO_PORT3 0x3
#define GPIO_PORT4 0x4
#define GPIO_PORT5 0x5
#define GPIO_PORT6 0x6
#define GPIO_PORT7 0x7
#define GPIO_PORT8 0x8
#define GPIO_PORT9 0x9
#define GPIO_PORTA 0xa
#define GPIO_PORTB 0xb
#define GPIO_PORTC 0xc
#define GPIO_PORTD 0xd
#define GPIO_PORTE 0xe
#define GPIO_PORTF 0xf
#define GPIO_PORTG 0x10
#define GPIO_PORTJ 0x12

#endif
