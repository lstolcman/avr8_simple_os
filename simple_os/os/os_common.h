#pragma once

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

typedef struct
{
	void (*task_ptr)(void);
	uint16_t delay;
	bool timer_overflow;
} os_task_table_entry;


