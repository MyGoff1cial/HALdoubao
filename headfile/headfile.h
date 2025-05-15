#ifndef _HEADFILE_H
#define _HEADFILE_H







/* 系统头文件区域 */
#include "main.h"





/* 用户结构体定义区 */


//* 结构体的定义可以放在头文件中

typedef struct{
	
	GPIO_TypeDef *GPIOx;  //选择GPIO端口
	uint16_t GPIO_Pin;	  //选择GPIO引脚
	uint8_t Led_Enable;	  //开启或关闭LED
	
}Led_Config_T;







/* 用户头文件区域 */

#include "Scheduler.h"
#include "Led.h"





#endif
