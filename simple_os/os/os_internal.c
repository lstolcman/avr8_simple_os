/**
 * @file os_internal.c
 * 
 */

#include "os_internal.h"


/** 
 * @brief ticks
 * Variable determines how many ticks (=interrupts for sheduler) happened.
 * For now, ticks are every 100us
 */

volatile uint16_t ticks;



ISR(INT0_vect, ISR_NAKED)
{
	cli(); // instead, use util/atomic.h
	TCNT0 = (_OS_INTERNAL_TIMER_COUNTER);

	
	//search next thread
	os_sheduler();
	
	//give context
	os_dispatcher();
	
	sei();
}

void os_internal_init(void)
{
	
	TCCR0 |= (_OS_INTERNAL_TIMER_CONTROL_MASK);
	TIMSK |= (1<<TOIE0);
	TCNT0 = (_OS_INTERNAL_TIMER_COUNTER);
	
}



