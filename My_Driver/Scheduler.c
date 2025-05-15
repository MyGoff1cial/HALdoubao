#include "headfile.h"

uint8_t task_num;



typedef struct{
	
	
	void (*func_proc)(void);
	uint32_t rate_ms;        //持续时间
	uint32_t last_run;       //上次运行时间
	
}task_t;


static task_t scheduler_task[]={
	{Led_Task,5,0},
	
	
};


void scheduler_init()
{
	task_num = sizeof(scheduler_task)/sizeof(task_t);
}

// * 调度器 调度器是任务执行的时间 我陷入了理解误区 比如点亮LED 任务执行后LED就会一直点亮 而不是熄灭
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

