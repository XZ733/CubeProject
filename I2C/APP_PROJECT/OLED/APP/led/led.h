#ifndef _led_H
#define _led_H


#include "system.h"


/*  LEDʱ�Ӷ˿ڡ����Ŷ��� */
#define LED_PORT 				GPIOA 

#define LED1_PIN 				GPIO_PIN_0
#define LED_PORT_RCC_ENABLE	__HAL_RCC_GPIOA_CLK_ENABLE()

//#define LED_PORT 				GPIOA   
#define LED2_PIN 				GPIO_PIN_1
//#define LED2_PORT_RCC_ENABLE	__HAL_RCC_GPIOA_CLK_ENABLE()


#define LED1 PAout(0)  	
#define LED2 PAout(1) 

void LED_Init(void);

#endif
