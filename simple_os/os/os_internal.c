#include "os_internal.h"


extern volatile uint16_t elapsed_us;


ISR(INT0_vect)
{
	cli();
	TCNT0 = (_OS_INTERNAL_TIMER_COUNTER);
	sei();
}

void os_internal_init(void)
{
	//Timer0 init
	/* Timer settings for 16MHz:
	 * interrupt every 100us
	 * prescaler set to /64
	 * TCNT0 set to 256-25=231
	 */
	#if F_CPU == 16000000
	    TCCR0 |= (_OS_INTERNAL_TIMER_CONTROL_MASK);
	    TIMSK |= (1<<TOIE0);
	    TCNT0 = (_OS_INTERNAL_TIMER_COUNTER);
	#else
	#error Unsupported F_CPU
	#endif
	
}



