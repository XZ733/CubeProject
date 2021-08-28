#include "pwm.h"


/*******************************************************************************
* �� �� ��         : TIM_PWM_Init
* ��������		   : TIMͨ�� PWM��ʼ������
* ��    ��         : per:��װ��ֵ
					 psc:��Ƶϵ��
* ��    ��         : ��
*******************************************************************************/
void TIM1_PWM_Init(u16 per,u16 psc)
{
	TIM_HandleTypeDef TIM1_Handler;      	//��ʱ��1��� 
	TIM_OC_InitTypeDef TIM1_CH3Handler;	//��ʱ��1ͨ��3���
	TIM_OC_InitTypeDef TIM1_CH4Handler;	//��ʱ��1ͨ��4���
	
	TIM1_Handler.Instance=TIM1;          	//��ʱ��1
    TIM1_Handler.Init.Prescaler=psc;       //��ʱ����Ƶ
    TIM1_Handler.Init.CounterMode=TIM_COUNTERMODE_UP;//���ϼ���ģʽ
    TIM1_Handler.Init.Period=per;          //�Զ���װ��ֵ
    TIM1_Handler.Init.ClockDivision=TIM_CLOCKDIVISION_DIV1;
    HAL_TIM_PWM_Init(&TIM1_Handler);       //��ʼ��PWM
    
    TIM1_CH3Handler.OCMode=TIM_OCMODE_PWM1; //ģʽѡ��PWM1
    TIM1_CH3Handler.Pulse=per/2;            //���ñȽ�ֵ,��ֵ����ȷ��ռ�ձȣ�Ĭ�ϱȽ�ֵΪ�Զ���װ��ֵ��һ��,��ռ�ձ�Ϊ50%
    TIM1_CH3Handler.OCPolarity=TIM_OCPOLARITY_HIGH; //����Ƚϼ���Ϊ�� 
    HAL_TIM_PWM_ConfigChannel(&TIM1_Handler,&TIM1_CH3Handler,TIM_CHANNEL_3);//����TIM3ͨ��3
	TIM1_CH4Handler.OCMode=TIM_OCMODE_PWM1; //ģʽѡ��PWM1
    TIM1_CH4Handler.Pulse=per/2;            //���ñȽ�ֵ,��ֵ����ȷ��ռ�ձȣ�Ĭ�ϱȽ�ֵΪ�Զ���װ��ֵ��һ��,��ռ�ձ�Ϊ50%
    TIM1_CH4Handler.OCPolarity=TIM_OCPOLARITY_HIGH; //����Ƚϼ���Ϊ��
		HAL_TIM_PWM_ConfigChannel(&TIM1_Handler,&TIM1_CH4Handler,TIM_CHANNEL_4);
	
    HAL_TIM_PWM_Start(&TIM1_Handler,TIM_CHANNEL_3);//����PWMͨ��3/4	
		HAL_TIM_PWM_Start(&TIM1_Handler,TIM_CHANNEL_4);
}

//��ʱ���ײ�������ʱ��ʹ�ܣ���������
//�˺����ᱻHAL_TIM_PWM_Init()����
//htim:��ʱ�����
void HAL_TIM_PWM_MspInit(TIM_HandleTypeDef *htim)
{
	GPIO_InitTypeDef GPIO_Initure;
	
	__HAL_RCC_TIM1_CLK_ENABLE();			//ʹ�ܶ�ʱ��1
	__HAL_RCC_AFIO_CLK_ENABLE();			//ʹ��AFIOʱ�ӣ�Ҫ����TIMӳ��ʱ��ǰʹ��
	__HAL_AFIO_REMAP_TIM1_ENABLE();		//TIM1ͨ�����Ų�����ӳ��ʹ��
	__HAL_RCC_GPIOE_CLK_ENABLE();			//����GPIOEʱ��
	GPIO_Initure.Pin=GPIO_PIN_13|GPIO_PIN_14;           	//PE13,14
	GPIO_Initure.Mode=GPIO_MODE_AF_PP;  	//�����������
	GPIO_Initure.Pull=GPIO_PULLUP;          //����
	GPIO_Initure.Speed=GPIO_SPEED_FREQ_HIGH;//����
	HAL_GPIO_Init(GPIOE,&GPIO_Initure);

	__HAL_RCC_TIM3_CLK_ENABLE();			//ʹ�ܶ�ʱ��3
	__HAL_RCC_AFIO_CLK_ENABLE();			//ʹ��AFIOʱ�ӣ�Ҫ����TIMӳ��ʱ��ǰʹ��		
	__HAL_AFIO_REMAP_TIM3_ENABLE();		
	__HAL_RCC_GPIOC_CLK_ENABLE();
	GPIO_Initure.Pin=GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_8|GPIO_PIN_9;           	
	GPIO_Initure.Mode=GPIO_MODE_AF_PP;  	//�����������
	GPIO_Initure.Pull=GPIO_PULLUP;          //����
	GPIO_Initure.Speed=GPIO_SPEED_FREQ_HIGH;//����
	HAL_GPIO_Init(GPIOC,&GPIO_Initure);
	
	__HAL_RCC_TIM4_CLK_ENABLE();			//ʹ�ܶ�ʱ��3
//	__HAL_RCC_AFIO_CLK_ENABLE();			//ʹ��AFIOʱ�ӣ�Ҫ����TIMӳ��ʱ��ǰʹ��		
	__HAL_RCC_GPIOB_CLK_ENABLE();
	GPIO_Initure.Pin=GPIO_PIN_8|GPIO_PIN_9;           	
	GPIO_Initure.Mode=GPIO_MODE_AF_PP;  	//�����������
	GPIO_Initure.Pull=GPIO_PULLUP;          //����
	GPIO_Initure.Speed=GPIO_SPEED_FREQ_HIGH;//����
	HAL_GPIO_Init(GPIOB,&GPIO_Initure);
}


void TIM3_PWM_Init(u16 per,u16 psc)
{
	TIM_HandleTypeDef TIM3_Handler;      	//��ʱ��3��� 
	TIM_OC_InitTypeDef TIM3_CH1Handler;	//��ʱ��3ͨ��1���
	TIM_OC_InitTypeDef TIM3_CH2Handler;	//��ʱ��3ͨ��2���
	TIM_OC_InitTypeDef TIM3_CH3Handler;	//��ʱ��3ͨ��3���
	TIM_OC_InitTypeDef TIM3_CH4Handler;	//��ʱ��3ͨ��4���
	
		TIM3_Handler.Instance=TIM3;          	//��ʱ��3
    TIM3_Handler.Init.Prescaler=psc;       //��ʱ����Ƶ
    TIM3_Handler.Init.CounterMode=TIM_COUNTERMODE_UP;//���ϼ���ģʽ
    TIM3_Handler.Init.Period=per;          //�Զ���װ��ֵ
    TIM3_Handler.Init.ClockDivision=TIM_CLOCKDIVISION_DIV1;
    HAL_TIM_PWM_Init(&TIM3_Handler);       //��ʼ��PWM
    
		TIM3_CH1Handler.OCMode=TIM_OCMODE_PWM1; //ģʽѡ��PWM1
    TIM3_CH1Handler.Pulse=per/2;            //���ñȽ�ֵ,��ֵ����ȷ��ռ�ձȣ�Ĭ�ϱȽ�ֵΪ�Զ���װ��ֵ��һ��,��ռ�ձ�Ϊ50%
    TIM3_CH1Handler.OCPolarity=TIM_OCPOLARITY_HIGH; //����Ƚϼ���Ϊ�� 
    HAL_TIM_PWM_ConfigChannel(&TIM3_Handler,&TIM3_CH1Handler,TIM_CHANNEL_1);//����TIM3ͨ��1
	
		TIM3_CH2Handler.OCMode=TIM_OCMODE_PWM1; //ģʽѡ��PWM1
    TIM3_CH2Handler.Pulse=per/2;            //���ñȽ�ֵ,��ֵ����ȷ��ռ�ձȣ�Ĭ�ϱȽ�ֵΪ�Զ���װ��ֵ��һ��,��ռ�ձ�Ϊ50%
    TIM3_CH2Handler.OCPolarity=TIM_OCPOLARITY_HIGH; //����Ƚϼ���Ϊ�� 
    HAL_TIM_PWM_ConfigChannel(&TIM3_Handler,&TIM3_CH2Handler,TIM_CHANNEL_2);//����TIM3ͨ��2
		
    TIM3_CH3Handler.OCMode=TIM_OCMODE_PWM1; //ģʽѡ��PWM1
    TIM3_CH3Handler.Pulse=per/2;            //���ñȽ�ֵ,��ֵ����ȷ��ռ�ձȣ�Ĭ�ϱȽ�ֵΪ�Զ���װ��ֵ��һ��,��ռ�ձ�Ϊ50%
    TIM3_CH3Handler.OCPolarity=TIM_OCPOLARITY_HIGH; //����Ƚϼ���Ϊ�� 
    HAL_TIM_PWM_ConfigChannel(&TIM3_Handler,&TIM3_CH3Handler,TIM_CHANNEL_3);//����TIM3ͨ��3
		
		TIM3_CH4Handler.OCMode=TIM_OCMODE_PWM1; //ģʽѡ��PWM1
    TIM3_CH4Handler.Pulse=per/2;            //���ñȽ�ֵ,��ֵ����ȷ��ռ�ձȣ�Ĭ�ϱȽ�ֵΪ�Զ���װ��ֵ��һ��,��ռ�ձ�Ϊ50%
    TIM3_CH4Handler.OCPolarity=TIM_OCPOLARITY_HIGH; //����Ƚϼ���Ϊ��
		HAL_TIM_PWM_ConfigChannel(&TIM3_Handler,&TIM3_CH4Handler,TIM_CHANNEL_4);
	
    HAL_TIM_PWM_Start(&TIM3_Handler,TIM_CHANNEL_1);
		HAL_TIM_PWM_Start(&TIM3_Handler,TIM_CHANNEL_2);
		HAL_TIM_PWM_Start(&TIM3_Handler,TIM_CHANNEL_3);//����PWMͨ��3/4	
		HAL_TIM_PWM_Start(&TIM3_Handler,TIM_CHANNEL_4);
}


void TIM4_PWM_Init(u16 per,u16 psc)
{
	TIM_HandleTypeDef TIM4_Handler;      	//��ʱ��1��� 
	TIM_OC_InitTypeDef TIM4_CH3Handler;	//��ʱ��1ͨ��3���
	TIM_OC_InitTypeDef TIM4_CH4Handler;	//��ʱ��1ͨ��4���
	
	TIM4_Handler.Instance=TIM4;          	//��ʱ��1
    TIM4_Handler.Init.Prescaler=psc;       //��ʱ����Ƶ
    TIM4_Handler.Init.CounterMode=TIM_COUNTERMODE_UP;//���ϼ���ģʽ
    TIM4_Handler.Init.Period=per;          //�Զ���װ��ֵ
    TIM4_Handler.Init.ClockDivision=TIM_CLOCKDIVISION_DIV1;
    HAL_TIM_PWM_Init(&TIM4_Handler);       //��ʼ��PWM
    
    TIM4_CH3Handler.OCMode=TIM_OCMODE_PWM1; //ģʽѡ��PWM1
    TIM4_CH3Handler.Pulse=per/2;            //���ñȽ�ֵ,��ֵ����ȷ��ռ�ձȣ�Ĭ�ϱȽ�ֵΪ�Զ���װ��ֵ��һ��,��ռ�ձ�Ϊ50%
    TIM4_CH3Handler.OCPolarity=TIM_OCPOLARITY_HIGH; //����Ƚϼ���Ϊ�� 
    HAL_TIM_PWM_ConfigChannel(&TIM4_Handler,&TIM4_CH3Handler,TIM_CHANNEL_3);//����TIM3ͨ��3
	TIM4_CH4Handler.OCMode=TIM_OCMODE_PWM1; //ģʽѡ��PWM1
    TIM4_CH4Handler.Pulse=per/2;            //���ñȽ�ֵ,��ֵ����ȷ��ռ�ձȣ�Ĭ�ϱȽ�ֵΪ�Զ���װ��ֵ��һ��,��ռ�ձ�Ϊ50%
    TIM4_CH4Handler.OCPolarity=TIM_OCPOLARITY_HIGH; //����Ƚϼ���Ϊ��
		HAL_TIM_PWM_ConfigChannel(&TIM4_Handler,&TIM4_CH4Handler,TIM_CHANNEL_4);
	
    HAL_TIM_PWM_Start(&TIM4_Handler,TIM_CHANNEL_3);//����PWMͨ��3/4	
		HAL_TIM_PWM_Start(&TIM4_Handler,TIM_CHANNEL_4);
//��ʱ���ײ�������ʱ��ʹ�ܣ���������
//�˺����ᱻHAL_TIM_PWM_Init()����
//htim:��ʱ�����
}
	
	

			
	



//����TIM1ͨ��3/4��ռ�ձ�
//compare:�Ƚ�ֵ
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
