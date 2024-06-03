#ifndef LCD_H_
#define LCD_H_

#include <avr/io.h>
#include <util/delay.h>
#include "STD_TYPYES.h" 
#include "BIT_MATH.h"   

#define LCD_DATA_PORT PORTB // Data port for LCD
#define LCD_CTRL_PORT PORTD // Control port for LCD
#define LCD_RS_PIN PD0      // Register select pin
#define LCD_RW_PIN PD1      // Read/Write pin
#define LCD_EN_PIN PD2      // Enable pin

#define LCD_DATA_DIR DDRB
#define LCD_CTRL_DIR DDRD

#define LCD_RS_HIGH() SET_BIT(LCD_CTRL_PORT, LCD_RS_PIN)
#define LCD_RS_LOW() CLR_BIT(LCD_CTRL_PORT, LCD_RS_PIN)

#define LCD_RW_HIGH() SET_BIT(LCD_CTRL_PORT, LCD_RW_PIN)
#define LCD_RW_LOW() CLR_BIT(LCD_CTRL_PORT, LCD_RW_PIN)

#define LCD_EN_HIGH() SET_BIT(LCD_CTRL_PORT, LCD_EN_PIN)
#define LCD_EN_LOW() CLR_BIT(LCD_CTRL_PORT, LCD_EN_PIN)

void LCD_init();
void LCD_command(u8 cmnd);    
void LCD_data(u8 data);       
void LCD_string(const char *str);
void LCD_clear();
void LCD_gotoxy(u8 x, u8 y);  

#endif /* LCD_H_ */
