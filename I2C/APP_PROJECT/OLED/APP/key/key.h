#ifndef _key_H
#define _key_H


#include "system.h"
 
#define KEY0_PIN   			GPIO_PIN_3    	//定义KEY0管脚
#define KEY1_PIN    		GPIO_PIN_5    	//定义KEY1管脚
#define KEY2_PIN    		GPIO_PIN_6    	//定义KEY2管脚
#define KEY3_PIN  		GPIO_PIN_13    	//定义KEY3管脚

#define KEY03_PORT 			  GPIOC 		//定义端口
#define KEY12_PORT 		GPIOE 		//定义端口

//使用位操作定义
#define KEY3 	PCin(13)
#define KEY0 	PCin(3)
#define KEY1 	PEin(5)
#define KEY2 	PEin(6)

//定义各个按键值  
#define KEY3_PRESS   	4
#define KEY0_PRESS		1
#define KEY1_PRESS		2
#define KEY2_PRESS		3

void KEY_Init(void);
u8 KEY_Scan(u8 mode);

#endif
