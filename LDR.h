#ifndef LDR_H_
#define LDR_H_

#include "DIO.h"
#include "ADC.h"

#define LDR_PIN   PC1	// Pin connected to LDR sensor

void LDR_init(void);
u16 LDR_readIntensity(void);

#endif /* LDR_H_ */
