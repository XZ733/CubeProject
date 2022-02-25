#ifndef __ADS9226_H__
#define __ADS9226_H__

#include "main.h"
#include "spi.h"

#define ADS9226_OK HAL_OK
#define ADS9226_BUSY HAL_TIMEOUT

#define ADS9226_CS_LOW()         HAL_GPIO_WritePin(M_SPI1_CS_GPIO_Port,M_SPI1_CS_Pin,0)
#define ADS9226_CS_HIGH()        HAL_GPIO_WritePin(M_SPI1_CS_GPIO_Port,M_SPI1_CS_Pin,1)

HAL_StatusTypeDef ADS9226_Read(uint8_t *Data_H,uint8_t *Data_L,uint16_t Timeout);

void DecToBin(const uint16_t dec, uint8_t* pbin);
uint16_t BinToDect(uint8_t* str);
uint16_t add(uint16_t data1, uint16_t data2);

#endif
