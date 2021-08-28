#include "system.h"
#include "SysTick.h"
#include "led.h"
#include "motor.h"
#include "key.h"	
#include "pwm.h"
//#include "exti.h"
#include "usart.h"
#include "i2c.h"
#include "24c02.h"
#include "oled.h"
#include "picture.h"

/*******************************************************************************
* 函 数 名         : main
* 函数功能		   : 主函数
* 输    入         : 无
* 输    出         : 无
*******************************************************************************/

/*简单的延时函数*/
void delay(__IO uint32_t nCount)
{
	for(; nCount != 0; nCount--);
}

/*步进电机驱动函数*/
void stepper(int num,int half_T)
{
		motor2_dir=0;
		motor2_en=0;
	motor1_dir=1;
		motor1_en=0;
	for(;num!=0;num--)
	{
		
		motor2_step=0;
		motor1_step=0;
		delay_ms(half_T);
		motor2_step=1;
		motor1_step=1;
		delay_ms(half_T);
	}
	motor2_en=1;
	motor1_en=1;
}


int main()
{


	HAL_Init();                     //初始化HAL库 
	SystemClock_Init(RCC_PLL_MUL10); //设置时钟,72M
	SysTick_Init(72);
	LED_Init();
	MOTOR_Init();
	KEY_Init();
	TIM1_PWM_Init(499,72-1);
	TIM3_PWM_Init(499,72-1);
	TIM4_PWM_Init(499,72-1);
//	EXTI_Init();
	USART1_Init(115200);
//	stepper(2000,1);
//	AT24CXX_Init();


//OLDE 0.9寸4线SPI模块与普中STM32开发板接线方式
//GND  接电源地
//VCC  接5V或3.3v电源
//D0   接PD6（SCL）
//D1   接PD7（SDA）
//RES  接PD4
//DC   接PD5
//CS   接PD3


	u8 i=0;
	OLED_Init(); //OLED初始化
	
	OLED_DrawBMP(0,0,128,8,(u8 *)pic1);	  //如果要正着显示，需要将取模方式修改重新取模
	delay_ms(1500);
	OLED_Clear();

	OLED_ShowString(0,0,"Hello World",16);	

	OLED_ShowFontHZ(16*0,20,0,16,1);	 //深圳普中科技
	OLED_ShowFontHZ(16*1,20,1,16,1);
	OLED_ShowFontHZ(16*2,20,2,16,1);
	OLED_ShowFontHZ(16*3,20,3,16,1);
	OLED_ShowFontHZ(16*4,20,4,16,1);
	OLED_ShowFontHZ(16*5,20,5,16,1);

	OLED_ShowString(0,40,"Write by Spring",16);
	OLED_Refresh_Gram();  //刷新GRAM数组

	while(1)
	{
		i++;
		if(i%20==0)
		{
			LED1=!LED1;
		}
		delay_ms(10);		
	}
}

		
			

