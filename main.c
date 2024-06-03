/*********************************************
	Project: Smart Light
	Creator: Ramy Amr & Seif Saleh
	Date: 27/5/2024
	Time: 1.36 am
*********************************************/
#define F_CPU 8000000UL
#include "ADC.h"
#include "LDR.h"
#include "PIR.h"
#include "DIO.h"
#include "LCD.h"
#include "TIMER.h"
#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>
#include "STD_TYPYES.h"

int main()
{
	// Initialize LED, LCD, ADC, PIR, and LDR
	PIN_WRITE(T0_LED, LOW);
	PIN_MODE(T0_LED, OUTPUT);
	LCD_init();
	TIMER0_PWM_Init();
	ADC_init();
	LDR_init();
	PIR_Int(PIR_PIN);

	u8 buffer[16];
	u8 ledOn = 0;

	while (1)
	{
		// Check for motion
		if (PIR_Motion_Detected())
		{
			// Motion detected, turn on LED if it was off
			if (!ledOn)
			{
				PIN_WRITE(T0_LED, HIGH);
				TIMER0_Enable();
				ledOn = 1;
				LCD_clear();
				LCD_gotoxy(1, 1);
				LCD_string("Motion Detected");
			}

			// Read LDR value and set LED intensity
			u16 ldrValue = LDR_readIntensity();
			u8 dutyCycle = (ldrValue * 255) / 1023;
			TIMER0_PWM_SetDutyCycle(dutyCycle);

			sprintf(buffer, "Intensity: %d", ldrValue);
			LCD_gotoxy(1, 2);
			LCD_string(buffer);
		}
		else
		{
			// No motion detected, turn off LED if it was on
			if (ledOn)
			{
				TIMER0_Disable();
				PIN_WRITE(T0_LED, LOW);
				ledOn = 0;
				LCD_clear();
				LCD_gotoxy(1, 1);
				LCD_string("No Motion");
				LCD_gotoxy(1, 2);
				LCD_string(" ");

				TIMER0_PWM_SetDutyCycle(0);
			}
		}

		_delay_ms(50); // Reduce delay for quicker response
	}

	return 0;
}
