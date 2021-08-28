#include "led.h"

/*******************************************************************************
* �� �� ��         : LED_Init
* ��������		   : LED��ʼ������
* ��    ��         : ��
* ��    ��         : ��
*******************************************************************************/
void LED_Init(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;
	
	LED_PORT_RCC_ENABLE;//ʹ��LED1ʱ��
	
	GPIO_InitStructure.Pin=LED1_PIN; //����LED1
    GPIO_InitStructure.Mode=GPIO_MODE_OUTPUT_PP;  //�������
    GPIO_InitStructure.Pull=GPIO_PULLUP;          //����
    GPIO_InitStructure.Speed=GPIO_SPEED_FREQ_HIGH;//����
    HAL_GPIO_Init(LED_PORT,&GPIO_InitStructure);//��ʼ��
	
	GPIO_InitStructure.Pin=LED2_PIN; //����LED2
    HAL_GPIO_Init(LED_PORT,&GPIO_InitStructure);//��ʼ��
	

	HAL_GPIO_WritePin(LED_PORT,LED1_PIN,GPIO_PIN_SET);	//����LED1
    HAL_GPIO_WritePin(LED_PORT,LED2_PIN,GPIO_PIN_SET);	//����LED2


} 
