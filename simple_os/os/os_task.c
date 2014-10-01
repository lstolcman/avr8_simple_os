/**
 * @file os_task.c
 * 
 */

#include "os_task.h"


bool os_task_add(void (*task_ptr)(void))
{
	if (task_ptr)
	{
		return true;
	}
	else
	{
		return false;
	}
}


void os_task_yield(void)
{
	
}
