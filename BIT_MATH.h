/*
 * BIT_MATH.h
 *
 * Created: 4/16/2024 11:44:56 AM
 *  Author: Shady
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define	 SET_BIT(reg,bit)	reg|=(1<<bit)
#define	 CLR_BIT(reg,bit)	reg&=(~(1<<bit))
#define  TOG_BIT(reg,bit)	reg^=(1<<bit)
#define  GET_BIT(reg,bit)	((reg>>bit)&1)

#endif /* BIT_MATH_H_ */