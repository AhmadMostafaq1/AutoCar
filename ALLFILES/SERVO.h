/*
 * SERVO.h
 *
 *  Created: 29/2/2023 12:20:49 AM
 *  Author:Ahmed
 */ 


#ifndef SERVO_H_
#define SERVO_H_
#include  "../../MCAL/TIMER/TIMER.h"
#include "../../COMMON/CPU_CONFIG.h"

void servo_init(void);
void servo_90_anti_clkwise(void);
void servo_90_clkwise(void);
void servo_zero(void);




#endif /* SERVO_H_ */