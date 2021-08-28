#include "motor.h"

/*******************************************************************************
* 函 数 名         : MOTOR_Init
* 函数功能		   : MOTOR初始化函数
* 输    入         : 无
* 输    出         : 无
*******************************************************************************/
void MOTOR_Init(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;
	
	__HAL_RCC_GPIOA_CLK_ENABLE();          	//开启时钟
	__HAL_RCC_GPIOC_CLK_ENABLE();
	__HAL_RCC_GPIOD_CLK_ENABLE();
	
	__HAL_RCC_AFIO_CLK_ENABLE();
	__HAL_AFIO_REMAP_SWJ_NOJTAG(); //禁用JTAG,PA15作为普通IO用
	
	  GPIO_InitStructure.Pin=MOTOR1_STEP; 				//MOTOR1 PA15
    GPIO_InitStructure.Mode=GPIO_MODE_OUTPUT_PP;  	//推挽输出
    GPIO_InitStructure.Pull=GPIO_PULLUP;          	//上拉
    GPIO_InitStructure.Speed=GPIO_SPEED_FREQ_HIGH;    //高速
    HAL_GPIO_Init(GPIOA,&GPIO_InitStructure);//初始化

	GPIO_InitStructure.Pin=MOTOR1_EN; 				
	HAL_GPIO_Init(GPIOC,&GPIO_InitStructure);//初始化
	
	GPIO_InitStructure.Pin=MOTOR1_DIR; 				
	HAL_GPIO_Init(GPIOD,&GPIO_InitStructure);//初始化
	
	HAL_GPIO_WritePin(MOTOR1_STEP_PORT,MOTOR1_STEP,GPIO_PIN_SET);
	HAL_GPIO_WritePin(MOTOR1_EN_PORT,MOTOR1_EN,GPIO_PIN_SET);
	HAL_GPIO_WritePin(MOTOR1_DIR_PORT,MOTOR1_DIR,GPIO_PIN_SET);
	
	__HAL_RCC_GPIOE_CLK_ENABLE();
	
		GPIO_InitStructure.Pin=MOTOR2_STEP; 				//MOTOR2 
    GPIO_InitStructure.Mode=GPIO_MODE_OUTPUT_PP;  	//推挽输出
    GPIO_InitStructure.Pull=GPIO_PULLUP;          	//上拉
    GPIO_InitStructure.Speed=GPIO_SPEED_FREQ_HIGH;    //高速
    HAL_GPIO_Init(GPIOE,&GPIO_InitStructure);//初始化
	
	GPIO_InitStructure.Pin=MOTOR2_EN; 				
	HAL_GPIO_Init(GPIOE,&GPIO_InitStructure);//初始化
	
	GPIO_InitStructure.Pin=MOTOR2_DIR; 				
	HAL_GPIO_Init(GPIOE,&GPIO_InitStructure);//初始化
	
	HAL_GPIO_WritePin(MOTOR2_PORT,MOTOR2_STEP,GPIO_PIN_SET);
	HAL_GPIO_WritePin(MOTOR2_PORT,MOTOR2_EN,GPIO_PIN_SET);
	HAL_GPIO_WritePin(MOTOR2_PORT,MOTOR2_DIR,GPIO_PIN_SET);
	
}


