#ifndef _LED_H
#define _LED_H

#include "headfile.h"

void Led_Init(void);
void Led_Control(Led_Config_T *ucLed);
void Led_Task(void);

#endif


