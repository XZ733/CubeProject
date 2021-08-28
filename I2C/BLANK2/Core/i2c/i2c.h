#ifndef _i2c_H
#define _i2c_H

#include "main.h"

/*  IIC_SCLʱ�Ӷ˿ڡ����Ŷ��� */
#define IIC_SCL_PORT 			GPIOC
#define IIC_SCL_PIN 			(GPIO_PIN_4)
#define IIC_SCL_PORT_RCC		__HAL_RCC_GPIOC_CLK_ENABLE()

/*  IIC_SDAʱ�Ӷ˿ڡ����Ŷ��� */
#define IIC_SDA_PORT 			GPIOA
#define IIC_SDA_PIN 			(GPIO_PIN_8)
#define IIC_SDA_PORT_RCC		__HAL_RCC_GPIOA_CLK_ENABLE()


//IO��������	 
#define IIC_SCL    PCout(4) //SCL
#define IIC_SDA    PAout(8) //SDA
#define READ_SDA   PAin(8)  //����SDA

//IIC���в�������
void IIC_Init(void);                //��ʼ��IIC��IO��				 
void IIC_Start(void);				//����IIC��ʼ�ź�
void IIC_Stop(void);	  			//����IICֹͣ�ź�
void IIC_Send_Byte(u8 txd);			//IIC����һ���ֽ�
u8 IIC_Read_Byte(u8 ack);//IIC��ȡһ���ֽ�
u8 IIC_Wait_Ack(void); 				//IIC�ȴ�ACK�ź�
void IIC_Ack(void);					//IIC����ACK�ź�
void IIC_NAck(void);				//IIC������ACK�ź�


#endif
