#include "headfile.h"

uint8_t Led_Num;





Led_Config_T ucLed[]={
	{GPIOA,GPIO_PIN_5,1},
};


// * ���ڼ���LED����Ŀ
void Led_Init()
{
	Led_Num = sizeof(ucLed)/sizeof(Led_Config_T);
}


// * ���ڿ���LED����
void Led_Control(Led_Config_T *ucLed)
{
	
	for(int i =0;i<Led_Num;i++)
	{
		if(ucLed[i].Led_Enable)
		{
		
			HAL_GPIO_WritePin(ucLed[i].GPIOx,ucLed[i].GPIO_Pin,GPIO_PIN_SET);
		}
		else
		{
			HAL_GPIO_WritePin(ucLed[i].GPIOx,ucLed[i].GPIO_Pin,GPIO_PIN_RESET);
		}
	}
}



// * Led����

void Led_Task()
{

	Led_Control(ucLed);
	
	
}








