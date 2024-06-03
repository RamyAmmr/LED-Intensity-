#ifndef PIR_H_
#define PIR_H_


#include "STD_TYPYES.h"

#define PIR_PIN     PC0

// Function prototypes
void PIR_Int(u8 pin);
u8 PIR_Motion_Detected(void);

#endif /* PIR_H_ */