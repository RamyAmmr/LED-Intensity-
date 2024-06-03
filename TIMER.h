#ifndef TIMER_H_
#define TIMER_H_

#include "STD_TYPYES.h"

#define T0_LED PD6
#define T1_LED PB3

// Function prototypes
void TIMER0_PWM_Init(void);
void TIMER0_PWM_SetDutyCycle(u8 dutyCycle);
void TIMER0_Enable(void);
void TIMER0_Disable(void);

#endif /* TIMER_H_ */
