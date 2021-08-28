#include "key.h"
#include "SysTick.h"

/*******************************************************************************
* �� �� ��         : KEY_Init
* ��������		   : ������ʼ��
* ��    ��         : ��
* ��    ��         : ��
*******************************************************************************/
void KEY_Init(void)
{
	GPIO_InitTypeDef GPIO_InitStructure; //����ṹ�����	
	__HAL_RCC_GPIOC_CLK_ENABLE();           //����GPIOAʱ��
    __HAL_RCC_GPIOE_CLK_ENABLE();           //����GPIOEʱ��
	
	GPIO_InitStructure.Pin=KEY0_PIN|KEY3_PIN; 
    GPIO_InitStructure.Mode=GPIO_MODE_INPUT;  //����ģʽ
    GPIO_InitStructure.Pull=GPIO_PULLUP;          //����
    HAL_GPIO_Init(KEY03_PORT,&GPIO_InitStructure);
	
	GPIO_InitStructure.Pin=KEY1_PIN|KEY2_PIN; 
    GPIO_InitStructure.Pull=GPIO_PULLUP;          //����
    HAL_GPIO_Init(KEY12_PORT,&GPIO_InitStructure);
}

/*******************************************************************************
* �� �� ��         : KEY_Scan
* ��������		   : ����ɨ����
* ��    ��         : mode=0:���ΰ��°���
					 mode=1���������°���
* ��    ��         : 0��δ�а�������
					 KEY_UP_PRESS��KEY_UP������
					 KEY0_PRESS��KEY0������
					 KEY1_PRESS��KEY1������
					 KEY2_PRESS��KEY2������
*******************************************************************************/
u8 KEY_Scan(u8 mode)
{
	static u8 key=1;
	
	if(mode==1) //������������
		key=1;
	if(key==1&&(KEY3==0||KEY0==0||KEY1==0||KEY2==0)) //����һ����������
	{
		delay_ms(10);  //����
		key=0;
		if(KEY3==0)
			return KEY3_PRESS; 
		else if(KEY0==0)
			return KEY0_PRESS; 
		else if(KEY1==0)
			return KEY1_PRESS; 
		else if(KEY2==0)
			return KEY2_PRESS; 
	}
	else if(KEY3==1&&KEY0==1&&KEY1==1&&KEY2==1)    //�ް�������
		key=1;
	return 0;
}
