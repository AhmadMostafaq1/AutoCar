/*
 * US.h
 *
  *  Created: 29/2/2023 3:18:54 AM
  *  Author:Ahmed
 */ 


#ifndef US_H_
#define US_H_

#include "../../MCAL/DIO/DIO.h"
#include "../../Common/CPU_CONFIG.h"
#include "../../MCAL/TIMER/TIMER.h"
void US_Init(void);
float pulse(void);
void timer_used(void);
#endif /* US_H_ */