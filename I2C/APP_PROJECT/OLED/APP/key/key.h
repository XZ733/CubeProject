#ifndef _key_H
#define _key_H


#include "system.h"
 
#define KEY0_PIN   			GPIO_PIN_3    	//����KEY0�ܽ�
#define KEY1_PIN    		GPIO_PIN_5    	//����KEY1�ܽ�
#define KEY2_PIN    		GPIO_PIN_6    	//����KEY2�ܽ�
#define KEY3_PIN  		GPIO_PIN_13    	//����KEY3�ܽ�

#define KEY03_PORT 			  GPIOC 		//����˿�
#define KEY12_PORT 		GPIOE 		//����˿�

//ʹ��λ��������
#define KEY3 	PCin(13)
#define KEY0 	PCin(3)
#define KEY1 	PEin(5)
#define KEY2 	PEin(6)

//�����������ֵ  
#define KEY3_PRESS   	4
#define KEY0_PRESS		1
#define KEY1_PRESS		2
#define KEY2_PRESS		3

void KEY_Init(void);
u8 KEY_Scan(u8 mode);

#endif
