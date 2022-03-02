#ifndef INC_TASK2_H_
#define INC_TASK2_H_


#include "main.h"
#include "usart.h"
#include "gpio.h"

#include "los_sys.h"
#include "los_task.ph"
#include "los_memory.ph"

#include "cmsis_os.h"


void LED0TaskEntry(void* arg);
void LED1TaskEntry(void* arg);

#endif /* INC_TASK2_H_ */
