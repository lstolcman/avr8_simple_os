#pragma once


#include <stdbool.h>


#include "os_sheduler.h"


bool os_task_add(void (*task_ptr)(void));
void os_task_yield(void);


