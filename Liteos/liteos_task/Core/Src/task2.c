#include "task2.h"

void LED0TaskEntry(void* arg)
{
	for(;;)
	{
		PRINTK("LED0Task !\r\n");
		//HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_8);
		osDelay(1000);
	}
}

void LED1TaskEntry(void* arg)
{
	for(;;)
	{
		PRINTK("LED1Task !\r\n");
		//HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_9);
		osDelay(2000);
	}
}

