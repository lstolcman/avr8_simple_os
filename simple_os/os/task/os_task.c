/**
 * @file os_task.c
 * 
 */

#include "os_task.h"

/**
 * Adds task to task queue
 * @return
 * If add task will become successful, returns true, otherwise returns false
 */
bool os_task_add(void (*task_ptr)(void))
{
	//push all registers and return context - registers must be on stack!!! 
	if (task_ptr)
	{
		return true;
	}

	return false;
}

/**
 * Execute sheduler
 */
void os_task_yield(void)
{
	os_sheduler();
	os_dispatcher();
}
