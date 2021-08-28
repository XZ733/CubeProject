#include "exti.h"
#include "key.h"
#include "SysTick.h"
#include "led.h"
#include "pwm.h"
#include "24c02.h"
#include "usart.h"


//�ⲿ�жϳ�ʼ��
void EXTI_Init(void)
{
    GPIO_InitTypeDef GPIO_Initure;
    
    __HAL_RCC_GPIOC_CLK_ENABLE();               //����GPIOCʱ��
    __HAL_RCC_GPIOE_CLK_ENABLE();               //����GPIOEʱ��
    
    GPIO_Initure.Pin=GPIO_PIN_3|GPIO_PIN_13;                //PC3/13
    GPIO_Initure.Mode=GPIO_MODE_IT_FALLING;      //�½��ش���
    GPIO_Initure.Pull=GPIO_PULLUP;
    HAL_GPIO_Init(GPIOC,&GPIO_Initure);
    
    GPIO_Initure.Pin=GPIO_PIN_5|GPIO_PIN_6; 	//PE5/6
    GPIO_Initure.Mode=GPIO_MODE_IT_FALLING;     //�½��ش���
    GPIO_Initure.Pull=GPIO_PULLUP;
    HAL_GPIO_Init(GPIOE,&GPIO_Initure);
    
    //�ж���0-PA0
    HAL_NVIC_SetPriority(EXTI0_IRQn,2,0);       //��ռ���ȼ�Ϊ2�������ȼ�Ϊ0
    HAL_NVIC_EnableIRQ(EXTI0_IRQn);             //ʹ���ж���0
    
    //�ж���2-PE2
    HAL_NVIC_SetPriority(EXTI2_IRQn,2,1);       //��ռ���ȼ�Ϊ2�������ȼ�Ϊ1
    HAL_NVIC_EnableIRQ(EXTI2_IRQn);             //ʹ���ж���2
    
    //�ж���3-PE3
    HAL_NVIC_SetPriority(EXTI3_IRQn,2,2);       //��ռ���ȼ�Ϊ2�������ȼ�Ϊ2
    HAL_NVIC_EnableIRQ(EXTI3_IRQn);             //ʹ���ж���2
    
    //�ж���4-PE4
    HAL_NVIC_SetPriority(EXTI4_IRQn,2,3);   	//��ռ���ȼ�Ϊ2�������ȼ�Ϊ3
    HAL_NVIC_EnableIRQ(EXTI4_IRQn);         	//ʹ���ж���4  
}


//�жϷ�����
void EXTI0_IRQHandler(void)
{
    HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_13);		//�����жϴ����ú���
}

void EXTI2_IRQHandler(void)
{
    HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_3);		//�����жϴ����ú���
}

void EXTI3_IRQHandler(void)
{
    HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_5);		//�����жϴ����ú���
}

void EXTI4_IRQHandler(void)
{
    HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_6);		//�����жϴ����ú���
}

//�жϷ����������Ҫ��������
//��HAL�������е��ⲿ�жϷ�����������ô˺���
//GPIO_Pin:�ж����ź�
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
		u8 k=0;
    delay_ms(10);      //����
    switch(GPIO_Pin)
    {
        case GPIO_PIN_13:
            if(KEY3==0) 
            {
							LED2=0;
							k++;
							if(k>255)
					{
							k=255;
					}
					AT24CXX_WriteOneByte(0,k);
					printf("д��������ǣ�%d\r\n",k);
            }
            break;
        case GPIO_PIN_6:
            if(KEY2==0)  
            {
							LED2=1;
                k=AT24CXX_ReadOneByte(0);
								printf("��ȡ�������ǣ�%d\r\n",k);
            }
            break;
        case GPIO_PIN_5:
            if(KEY1==0)  
            {
								
            }
            break;
        case GPIO_PIN_3:
            if(KEY0==0)  
            {
								
            }
            break;
    }
}

