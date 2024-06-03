#ifndef ATMEGA328P_REG_H_
#define ATMEGA328P_REG_H_

#include "STD_TYPYES.h"

// Registers for Port B
#define PINB_REG  (*(volatile u8*)0x23)
#define DDRB_REG  (*(volatile u8*)0x24)
#define PORTB_REG (*(volatile u8*)0x25)

// Registers for Port C
#define PINC_REG  (*(volatile u8*)0x26)
#define DDRC_REG  (*(volatile u8*)0x27)
#define PORTC_REG (*(volatile u8*)0x28)

// Registers for Port D
#define PIND_REG  (*(volatile u8*)0x29)
#define DDRD_REG  (*(volatile u8*)0x2A)
#define PORTD_REG (*(volatile u8*)0x2B)

// PIN MACROS
// Port B
#ifndef PB0
#define PB0 10
#endif

#ifndef PB1
#define PB1 11
#endif

#ifndef PB2
#define PB2 12
#endif

#ifndef PB3
#define PB3 13
#endif

#ifndef PB4
#define PB4 14
#endif

#ifndef PB5
#define PB5 15
#endif

#ifndef PB6
#define PB6 16
#endif

#ifndef PB7
#define PB7 17
#endif

// Port C
#ifndef PC0
#define PC0 20
#endif

#ifndef PC1
#define PC1 21
#endif

#ifndef PC2
#define PC2 22
#endif

#ifndef PC3
#define PC3 23
#endif

#ifndef PC4
#define PC4 24
#endif

#ifndef PC5
#define PC5 25
#endif

#ifndef PC6
#define PC6 26
#endif

#ifndef PC7
#define PC7 27
#endif

// Port D
#ifndef PD0
#define PD0 30
#endif

#ifndef PD1
#define PD1 31
#endif

#ifndef PD2
#define PD2 32
#endif

#ifndef PD3
#define PD3 33
#endif

#ifndef PD4
#define PD4 34
#endif

#ifndef PD5
#define PD5 35
#endif

#ifndef PD6
#define PD6 36
#endif

#ifndef PD7
#define PD7 37
#endif

// PORT MACROS

#ifndef PORTB
#define PORTB 1
#endif

#ifndef PORTC
#define PORTC 2
#endif

#ifndef PORTD
#define PORTD 3
#endif


#endif /* ATMEGA328P_REG_H_ */
