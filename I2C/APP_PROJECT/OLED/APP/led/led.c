#include "led.h"

/*******************************************************************************
* 函 数 名         : LED_Init
* 函数功能		   : LED初始化函数
* 输    入         : 无
* 输    出         : 无
*******************************************************************************/
void LED_Init(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;
	
	LED_PORT_RCC_ENABLE;//使能LED1时钟
	
	GPIO_InitStructure.Pin=LED1_PIN; //设置LED1
    GPIO_InitStructure.Mode=GPIO_MODE_OUTPUT_PP;  //推挽输出
    GPIO_InitStructure.Pull=GPIO_PULLUP;          //上拉
    GPIO_InitStructure.Speed=GPIO_SPEED_FREQ_HIGH;//高速
    HAL_GPIO_Init(LED_PORT,&GPIO_InitStructure);//初始化
	
	GPIO_InitStructure.Pin=LED2_PIN; //设置LED2
    HAL_GPIO_Init(LED_PORT,&GPIO_InitStructure);//初始化
	

	HAL_GPIO_WritePin(LED_PORT,LED1_PIN,GPIO_PIN_SET);	//拉高LED1
    HAL_GPIO_WritePin(LED_PORT,LED2_PIN,GPIO_PIN_SET);	//拉高LED2


} 
