#include "headfile.h"

uint8_t task_num;



typedef struct{
	
	
	void (*func_proc)(void);
	uint32_t rate_ms;        //����ʱ��
	uint32_t last_run;       //�ϴ�����ʱ��
	
}task_t;


static task_t scheduler_task[]={
	{Led_Task,5,0},
	
	
};


void scheduler_init()
{
	task_num = sizeof(scheduler_task)/sizeof(task_t);
}

// * ������ ������������ִ�е�ʱ�� ��������������� �������LED ����ִ�к�LED�ͻ�һֱ���� ������Ϩ��
void task_run()
{
	for(uint8_t i=0;i<task_num;i++)
	{
		
		uint32_t now_time = HAL_GetTick();
		
		if(now_time>=scheduler_task[i].rate_ms+scheduler_task[i].last_run)
		{
			scheduler_task[i].last_run=now_time;
			scheduler_task[i].func_proc();
		}
	}

}

