#ifndef __ADS9226_H__
#define __ADS9226_H__

#include "main.h"
#include "spi.h"

#define AD7606_OK HAL_OK
#define AD7606_BUSY HAL_TIMEOUT

#define AD7606_CS_LOW()         HAL_GPIO_WritePin(M_SPI1_CS_GPIO_Port,M_SPI1_CS_Pin,0)
#define AD7606_CS_HIGH()        HAL_GPIO_WritePin(M_SPI1_CS_GPIO_Port,M_SPI1_CS_Pin,1)

HAL_StatusTypeDef AD7606_Read(uint8_t *Data_H,uint8_t *Data_L,uint16_t Timeout);


#endif
