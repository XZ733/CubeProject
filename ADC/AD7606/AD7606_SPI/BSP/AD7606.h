#ifndef __AD7606_H__
#define __AD7606_H__

#include "main.h"
#include "spi.h"
#include "gpio.h"

#define AD7606_OK HAL_OK
#define AD7606_BUSY HAL_TIMEOUT

#define CS_1()         			 HAL_GPIO_WritePin(SPI1_CS_GPIO_Port,SPI1_CS_Pin,GPIO_PIN_SET)
#define CS_0()        			 HAL_GPIO_WritePin(SPI1_CS_GPIO_Port,SPI1_CS_Pin,GPIO_PIN_RESET)


#define CONVST_1() 				 HAL_GPIO_WritePin(CONVET_GPIO_Port,CONVET_Pin,GPIO_PIN_SET)
#define CONVST_0() 				 HAL_GPIO_WritePin(CONVET_GPIO_Port,CONVET_Pin,GPIO_PIN_RESET)

#define RESET_1()				 HAL_GPIO_WritePin(RST_GPIO_Port,RST_Pin,GPIO_PIN_SET);//复位信号
#define RESET_0()				 HAL_GPIO_WritePin(RST_GPIO_Port,RST_Pin,GPIO_PIN_RESET);



void bsp_AD7606_Init(void);

HAL_StatusTypeDef bsp_AD7606_Read(double *Data,uint8_t Size,uint16_t Timeout);




#endif
