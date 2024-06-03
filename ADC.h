#ifndef ADC_H_
#define ADC_H_

#include "STD_TYPYES.h"

void ADC_init(void);
//void ADC_startConversion(u8 channel);
u16 ADC_read(u8 channel);

#endif /* ADC_H_ */
