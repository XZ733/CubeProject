#include "pwm.h"


/*******************************************************************************
* 函 数 名         : TIM_PWM_Init
* 函数功能		   : TIM通道 PWM初始化函数
* 输    入         : per:重装载值
					 psc:分频系数
* 输    出         : 无
*******************************************************************************/
void TIM1_PWM_Init(u16 per,u16 psc)
{
	TIM_HandleTypeDef TIM1_Handler;      	//定时器1句柄 
	TIM_OC_InitTypeDef TIM1_CH3Handler;	//定时器1通道3句柄
	TIM_OC_InitTypeDef TIM1_CH4Handler;	//定时器1通道4句柄
	
	TIM1_Handler.Instance=TIM1;          	//定时器1
    TIM1_Handler.Init.Prescaler=psc;       //定时器分频
    TIM1_Handler.Init.CounterMode=TIM_COUNTERMODE_UP;//向上计数模式
    TIM1_Handler.Init.Period=per;          //自动重装载值
    TIM1_Handler.Init.ClockDivision=TIM_CLOCKDIVISION_DIV1;
    HAL_TIM_PWM_Init(&TIM1_Handler);       //初始化PWM
    
    TIM1_CH3Handler.OCMode=TIM_OCMODE_PWM1; //模式选择PWM1
    TIM1_CH3Handler.Pulse=per/2;            //设置比较值,此值用来确定占空比，默认比较值为自动重装载值的一半,即占空比为50%
    TIM1_CH3Handler.OCPolarity=TIM_OCPOLARITY_HIGH; //输出比较极性为低 
    HAL_TIM_PWM_ConfigChannel(&TIM1_Handler,&TIM1_CH3Handler,TIM_CHANNEL_3);//配置TIM3通道3
	TIM1_CH4Handler.OCMode=TIM_OCMODE_PWM1; //模式选择PWM1
    TIM1_CH4Handler.Pulse=per/2;            //设置比较值,此值用来确定占空比，默认比较值为自动重装载值的一半,即占空比为50%
    TIM1_CH4Handler.OCPolarity=TIM_OCPOLARITY_HIGH; //输出比较极性为低
		HAL_TIM_PWM_ConfigChannel(&TIM1_Handler,&TIM1_CH4Handler,TIM_CHANNEL_4);
	
    HAL_TIM_PWM_Start(&TIM1_Handler,TIM_CHANNEL_3);//开启PWM通道3/4	
		HAL_TIM_PWM_Start(&TIM1_Handler,TIM_CHANNEL_4);
}

//定时器底层驱动，时钟使能，引脚配置
//此函数会被HAL_TIM_PWM_Init()调用
//htim:定时器句柄
void HAL_TIM_PWM_MspInit(TIM_HandleTypeDef *htim)
{
	GPIO_InitTypeDef GPIO_Initure;
	
	__HAL_RCC_TIM1_CLK_ENABLE();			//使能定时器1
	__HAL_RCC_AFIO_CLK_ENABLE();			//使能AFIO时钟，要放在TIM映射时钟前使能
	__HAL_AFIO_REMAP_TIM1_ENABLE();		//TIM1通道引脚部分重映射使能
	__HAL_RCC_GPIOE_CLK_ENABLE();			//开启GPIOE时钟
	GPIO_Initure.Pin=GPIO_PIN_13|GPIO_PIN_14;           	//PE13,14
	GPIO_Initure.Mode=GPIO_MODE_AF_PP;  	//复用推挽输出
	GPIO_Initure.Pull=GPIO_PULLUP;          //上拉
	GPIO_Initure.Speed=GPIO_SPEED_FREQ_HIGH;//高速
	HAL_GPIO_Init(GPIOE,&GPIO_Initure);

	__HAL_RCC_TIM3_CLK_ENABLE();			//使能定时器3
	__HAL_RCC_AFIO_CLK_ENABLE();			//使能AFIO时钟，要放在TIM映射时钟前使能		
	__HAL_AFIO_REMAP_TIM3_ENABLE();		
	__HAL_RCC_GPIOC_CLK_ENABLE();
	GPIO_Initure.Pin=GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_8|GPIO_PIN_9;           	
	GPIO_Initure.Mode=GPIO_MODE_AF_PP;  	//复用推挽输出
	GPIO_Initure.Pull=GPIO_PULLUP;          //上拉
	GPIO_Initure.Speed=GPIO_SPEED_FREQ_HIGH;//高速
	HAL_GPIO_Init(GPIOC,&GPIO_Initure);
	
	__HAL_RCC_TIM4_CLK_ENABLE();			//使能定时器3
//	__HAL_RCC_AFIO_CLK_ENABLE();			//使能AFIO时钟，要放在TIM映射时钟前使能		
	__HAL_RCC_GPIOB_CLK_ENABLE();
	GPIO_Initure.Pin=GPIO_PIN_8|GPIO_PIN_9;           	
	GPIO_Initure.Mode=GPIO_MODE_AF_PP;  	//复用推挽输出
	GPIO_Initure.Pull=GPIO_PULLUP;          //上拉
	GPIO_Initure.Speed=GPIO_SPEED_FREQ_HIGH;//高速
	HAL_GPIO_Init(GPIOB,&GPIO_Initure);
}


void TIM3_PWM_Init(u16 per,u16 psc)
{
	TIM_HandleTypeDef TIM3_Handler;      	//定时器3句柄 
	TIM_OC_InitTypeDef TIM3_CH1Handler;	//定时器3通道1句柄
	TIM_OC_InitTypeDef TIM3_CH2Handler;	//定时器3通道2句柄
	TIM_OC_InitTypeDef TIM3_CH3Handler;	//定时器3通道3句柄
	TIM_OC_InitTypeDef TIM3_CH4Handler;	//定时器3通道4句柄
	
		TIM3_Handler.Instance=TIM3;          	//定时器3
    TIM3_Handler.Init.Prescaler=psc;       //定时器分频
    TIM3_Handler.Init.CounterMode=TIM_COUNTERMODE_UP;//向上计数模式
    TIM3_Handler.Init.Period=per;          //自动重装载值
    TIM3_Handler.Init.ClockDivision=TIM_CLOCKDIVISION_DIV1;
    HAL_TIM_PWM_Init(&TIM3_Handler);       //初始化PWM
    
		TIM3_CH1Handler.OCMode=TIM_OCMODE_PWM1; //模式选择PWM1
    TIM3_CH1Handler.Pulse=per/2;            //设置比较值,此值用来确定占空比，默认比较值为自动重装载值的一半,即占空比为50%
    TIM3_CH1Handler.OCPolarity=TIM_OCPOLARITY_HIGH; //输出比较极性为低 
    HAL_TIM_PWM_ConfigChannel(&TIM3_Handler,&TIM3_CH1Handler,TIM_CHANNEL_1);//配置TIM3通道1
	
		TIM3_CH2Handler.OCMode=TIM_OCMODE_PWM1; //模式选择PWM1
    TIM3_CH2Handler.Pulse=per/2;            //设置比较值,此值用来确定占空比，默认比较值为自动重装载值的一半,即占空比为50%
    TIM3_CH2Handler.OCPolarity=TIM_OCPOLARITY_HIGH; //输出比较极性为低 
    HAL_TIM_PWM_ConfigChannel(&TIM3_Handler,&TIM3_CH2Handler,TIM_CHANNEL_2);//配置TIM3通道2
		
    TIM3_CH3Handler.OCMode=TIM_OCMODE_PWM1; //模式选择PWM1
    TIM3_CH3Handler.Pulse=per/2;            //设置比较值,此值用来确定占空比，默认比较值为自动重装载值的一半,即占空比为50%
    TIM3_CH3Handler.OCPolarity=TIM_OCPOLARITY_HIGH; //输出比较极性为低 
    HAL_TIM_PWM_ConfigChannel(&TIM3_Handler,&TIM3_CH3Handler,TIM_CHANNEL_3);//配置TIM3通道3
		
		TIM3_CH4Handler.OCMode=TIM_OCMODE_PWM1; //模式选择PWM1
    TIM3_CH4Handler.Pulse=per/2;            //设置比较值,此值用来确定占空比，默认比较值为自动重装载值的一半,即占空比为50%
    TIM3_CH4Handler.OCPolarity=TIM_OCPOLARITY_HIGH; //输出比较极性为低
		HAL_TIM_PWM_ConfigChannel(&TIM3_Handler,&TIM3_CH4Handler,TIM_CHANNEL_4);
	
    HAL_TIM_PWM_Start(&TIM3_Handler,TIM_CHANNEL_1);
		HAL_TIM_PWM_Start(&TIM3_Handler,TIM_CHANNEL_2);
		HAL_TIM_PWM_Start(&TIM3_Handler,TIM_CHANNEL_3);//开启PWM通道3/4	
		HAL_TIM_PWM_Start(&TIM3_Handler,TIM_CHANNEL_4);
}


void TIM4_PWM_Init(u16 per,u16 psc)
{
	TIM_HandleTypeDef TIM4_Handler;      	//定时器1句柄 
	TIM_OC_InitTypeDef TIM4_CH3Handler;	//定时器1通道3句柄
	TIM_OC_InitTypeDef TIM4_CH4Handler;	//定时器1通道4句柄
	
	TIM4_Handler.Instance=TIM4;          	//定时器1
    TIM4_Handler.Init.Prescaler=psc;       //定时器分频
    TIM4_Handler.Init.CounterMode=TIM_COUNTERMODE_UP;//向上计数模式
    TIM4_Handler.Init.Period=per;          //自动重装载值
    TIM4_Handler.Init.ClockDivision=TIM_CLOCKDIVISION_DIV1;
    HAL_TIM_PWM_Init(&TIM4_Handler);       //初始化PWM
    
    TIM4_CH3Handler.OCMode=TIM_OCMODE_PWM1; //模式选择PWM1
    TIM4_CH3Handler.Pulse=per/2;            //设置比较值,此值用来确定占空比，默认比较值为自动重装载值的一半,即占空比为50%
    TIM4_CH3Handler.OCPolarity=TIM_OCPOLARITY_HIGH; //输出比较极性为低 
    HAL_TIM_PWM_ConfigChannel(&TIM4_Handler,&TIM4_CH3Handler,TIM_CHANNEL_3);//配置TIM3通道3
	TIM4_CH4Handler.OCMode=TIM_OCMODE_PWM1; //模式选择PWM1
    TIM4_CH4Handler.Pulse=per/2;            //设置比较值,此值用来确定占空比，默认比较值为自动重装载值的一半,即占空比为50%
    TIM4_CH4Handler.OCPolarity=TIM_OCPOLARITY_HIGH; //输出比较极性为低
		HAL_TIM_PWM_ConfigChannel(&TIM4_Handler,&TIM4_CH4Handler,TIM_CHANNEL_4);
	
    HAL_TIM_PWM_Start(&TIM4_Handler,TIM_CHANNEL_3);//开启PWM通道3/4	
		HAL_TIM_PWM_Start(&TIM4_Handler,TIM_CHANNEL_4);
//定时器底层驱动，时钟使能，引脚配置
//此函数会被HAL_TIM_PWM_Init()调用
//htim:定时器句柄
}
	
	

			
	



//设置TIM1通道3/4的占空比
//compare:比较值
void TIM1_SetCompare3(u32 compare1)
{
	TIM1->CCR3=compare1; 
}
void TIM1_SetCompare4(u32 compare2)
{
	TIM1->CCR4=compare2; 
}
void TIM3_SetCompare1(u32 compare3)
{
	TIM3->CCR1=compare3; 
}
void TIM3_SetCompare2(u32 compare4)
{
	TIM3->CCR2=compare4; 
}
void TIM3_SetCompare3(u32 compare5)
{
	TIM3->CCR3=compare5; 
}
void TIM3_SetCompare4(u32 compare6)
{
	TIM3->CCR4=compare6; 
}
void TIM4_SetCompare3(u32 compare7)
{
	TIM4->CCR3=compare7; 
}
void TIM4_SetCompare4(u32 compare8)
{
	TIM4->CCR4=compare8; 
}
