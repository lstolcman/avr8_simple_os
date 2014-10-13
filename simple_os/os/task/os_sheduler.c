/**
 * @file os_sheduler.c
 * 
 */


#include "os_sheduler.h"

extern volatile os_task_table_entry os_task_table[(_OS_TASK_MAX_COUNT)];
extern volatile uint8_t os_task_current_thread;
extern volatile uint8_t os_task_next_thread;

void os_sheduler(void)
{
		
		os_task_next_thread = NULL;
		
		for (uint8_t i=0; i<(_OS_TASK_MAX_COUNT); ++i)
		{
			
		}
		
}

