#ifndef _HEADFILE_H
#define _HEADFILE_H







/* ϵͳͷ�ļ����� */
#include "main.h"





/* �û��ṹ�嶨���� */


//* �ṹ��Ķ�����Է���ͷ�ļ���

typedef struct{
	
	GPIO_TypeDef *GPIOx;  //ѡ��GPIO�˿�
	uint16_t GPIO_Pin;	  //ѡ��GPIO����
	uint8_t Led_Enable;	  //������ر�LED
	
}Led_Config_T;







/* �û�ͷ�ļ����� */

#include "Scheduler.h"
#include "Led.h"





#endif
