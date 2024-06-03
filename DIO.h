/*
 * DIO.h
 *
 * Created: 4/16/2024 11:55:04 AM
 *  Author: Shady
 */ 


#ifndef DIO_H_
#define DIO_H_
#include "ATMEGA328P_REG.h"
#include "BIT_MATH.h"

/*
	DDR MODES
*/
#define OUTPUT	1
#define INPUT	0
/*
	PORT MODES
*/
#define HIGH	1
#define LOW		0

#define PULL_UP_ENABLE		1
#define PULL_UP_DISABLE	0

/*
	Functions
*/
void PIN_MODE(u8 pin , u8 mode);
void PIN_WRITE(u8 pin , u8 mode);
void PIN_WRITE_TOG(u8 pin );
u8 PIN_READ(u8 pin);

#endif /* DIO_H_ */