#include "os_internal.h"


extern volatile uint16_t elapsed_us;
extern volatile uint16_t elapsed_ms;
extern volatile uint16_t elapsed_s;

ISR(INT0_vect)
{

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
	    TCCR0 |= (1<<CS01) | (1<<CS00);
	    TIMSK |= (1<<TOIE0);
	    TCNT0 = 6;
	#else
	#error Unsupported F_CPU
	#endif
	
}



