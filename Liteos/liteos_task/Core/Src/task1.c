#include "task1.h"


void* led1_task(UINT32 arg)
{
	for(;;)
	{
		printf("led1_task \r\n");
		//HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_8);
		LOS_TaskDelay(500);
	}
}

void* led2_task(UINT32 arg)
{
	for(;;)
	{
		printf("led2_task \r\n");
		//HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_9);
		LOS_TaskDelay(1000);
	}
}

void* print_task(UINT32 arg)
{
	for(;;)
	{
		printf("print_task !\r\n");
		//HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_10);
		LOS_TaskDelay(2000);
	}
}

