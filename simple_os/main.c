/**
 * @file main.c
 * 
 */

#include "main.h"


void task1(void)
{
	PORTB ^= 0b10000000;
	os_delay_ms(800);
}

void task2(void)
{
	PORTB ^= 0b01000000;
	os_delay_ms(500);
	
}


void os_init(void)
{
	os_task_add(task1);
	os_task_add(task1);
}



