#ifndef INC_TASK1_H_
#define INC_TASK1_H_

#include "main.h"
#include "usart.h"
#include "gpio.h"

#include "los_sys.h"
#include "los_task.ph"
#include "los_memory.ph"

void* led1_task(UINT32 arg);
void* led2_task(UINT32 arg);
void* print_task(UINT32 arg);

#endif /* INC_TASK1_H_ */
