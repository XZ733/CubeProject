#ifndef _motor_H
#define _motor_H


#include "system.h"


/*  MOTOR端口、引脚定义 */
#define MOTOR1_STEP_PORT 				GPIOA   
#define MOTOR1_STEP 				GPIO_PIN_15



#define MOTOR1_EN_PORT 				GPIOC  
#define MOTOR1_EN 				GPIO_PIN_12


#define MOTOR1_DIR_PORT 				GPIOD  
#define MOTOR1_DIR 				GPIO_PIN_0


#define motor1_step PAout(15)  	
#define motor1_en   PCout(12)
#define motor1_dir   PDout(0)

#define MOTOR2_PORT 				GPIOE   
#define MOTOR2_STEP 				GPIO_PIN_2
#define MOTOR2_EN 				GPIO_PIN_3
#define MOTOR2_DIR 				GPIO_PIN_4

#define motor2_step PEout(2)  	
#define motor2_en   PEout(3)
#define motor2_dir   PEout(4)

void MOTOR_Init(void);



#endif
