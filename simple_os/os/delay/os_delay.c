/**
* @file os_delay.c
*
*/

/*
 * http://www.nongnu.org/avr-libc/user-manual/group__util__delay.html
 * http://www.nongnu.org/avr-libc/user-manual/group__util__delay__basic.html
 */

#include "os_delay.h"


extern volatile os_task_table_entry os_task_table[_OS_TASK_MAX_COUNT];
extern volatile uint8_t os_task_current_thread;


void os_delay_us(uint16_t delay)
{
	if (delay > 100)
	{	
		os_task_table[os_task_current_thread].delay = delay/100;
	}

}


void os_delay_ms(uint16_t delay)
{
	os_task_table[os_task_current_thread].delay = delay*10;
}

