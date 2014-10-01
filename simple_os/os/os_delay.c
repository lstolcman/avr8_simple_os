/**
 * @file os_delay.c
 * 
 */

#include "os_delay.h"


void os_delay_us(uint16_t delay)
{

}


void os_delay_ms(uint16_t delay)
{
	os_delay_us(delay*1000);
}

