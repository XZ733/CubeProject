#include "motor.h"

/*******************************************************************************
* �� �� ��         : MOTOR_Init
* ��������		   : MOTOR��ʼ������
* ��    ��         : ��
* ��    ��         : ��
*******************************************************************************/
void MOTOR_Init(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;
	
	__HAL_RCC_GPIOA_CLK_ENABLE();          	//����ʱ��
	__HAL_RCC_GPIOC_CLK_ENABLE();
	__HAL_RCC_GPIOD_CLK_ENABLE();
	
	__HAL_RCC_AFIO_CLK_ENABLE();
	__HAL_AFIO_REMAP_SWJ_NOJTAG(); //����JTAG,PA15��Ϊ��ͨIO��
	
	  GPIO_InitStructure.Pin=MOTOR1_STEP; 				//MOTOR1 PA15
    GPIO_InitStructure.Mode=GPIO_MODE_OUTPUT_PP;  	//�������
    GPIO_InitStructure.Pull=GPIO_PULLUP;          	//����
    GPIO_InitStructure.Speed=GPIO_SPEED_FREQ_HIGH;    //����
    HAL_GPIO_Init(GPIOA,&GPIO_InitStructure);//��ʼ��

	GPIO_InitStructure.Pin=MOTOR1_EN; 				
	HAL_GPIO_Init(GPIOC,&GPIO_InitStructure);//��ʼ��
	
	GPIO_InitStructure.Pin=MOTOR1_DIR; 				
	HAL_GPIO_Init(GPIOD,&GPIO_InitStructure);//��ʼ��
	
	HAL_GPIO_WritePin(MOTOR1_STEP_PORT,MOTOR1_STEP,GPIO_PIN_SET);
	HAL_GPIO_WritePin(MOTOR1_EN_PORT,MOTOR1_EN,GPIO_PIN_SET);
	HAL_GPIO_WritePin(MOTOR1_DIR_PORT,MOTOR1_DIR,GPIO_PIN_SET);
	
	__HAL_RCC_GPIOE_CLK_ENABLE();
	
		GPIO_InitStructure.Pin=MOTOR2_STEP; 				//MOTOR2 
    GPIO_InitStructure.Mode=GPIO_MODE_OUTPUT_PP;  	//�������
    GPIO_InitStructure.Pull=GPIO_PULLUP;          	//����
    GPIO_InitStructure.Speed=GPIO_SPEED_FREQ_HIGH;    //����
    HAL_GPIO_Init(GPIOE,&GPIO_InitStructure);//��ʼ��
	
	GPIO_InitStructure.Pin=MOTOR2_EN; 				
	HAL_GPIO_Init(GPIOE,&GPIO_InitStructure);//��ʼ��
	
	GPIO_InitStructure.Pin=MOTOR2_DIR; 				
	HAL_GPIO_Init(GPIOE,&GPIO_InitStructure);//��ʼ��
	
	HAL_GPIO_WritePin(MOTOR2_PORT,MOTOR2_STEP,GPIO_PIN_SET);
	HAL_GPIO_WritePin(MOTOR2_PORT,MOTOR2_EN,GPIO_PIN_SET);
	HAL_GPIO_WritePin(MOTOR2_PORT,MOTOR2_DIR,GPIO_PIN_SET);
	
}


