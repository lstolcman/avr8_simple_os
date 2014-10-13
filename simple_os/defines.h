#pragma once

/**
 * @file defines.h
 * 
 * Timer settings for 16MHz:
 * interrupt every 100us
 * prescaler (_OS_INTERNAL_TIMER_CONTROL_MASK) - set to /64
 * TCNT0 (_OS_INTERNAL_TIMER_COUNTER) - set to 256-25=231
 */


/**
 * Prescaler value
 */
#define _OS_INTERNAL_TIMER_CONTROL_MASK (1<<CS01) | (1<<CS00)

/**
 * Start value for timer register
 */
#define _OS_INTERNAL_TIMER_COUNTER 231

/**
 * Max task count
 */
#define _OS_TASK_MAX_COUNT 8




