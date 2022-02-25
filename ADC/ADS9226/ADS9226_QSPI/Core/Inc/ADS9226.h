#ifndef __ADS9226_H
#define __ADS9226_H
#ifdef __cplusplus
 extern "C" {
#endif

#include "main.h"
#include "quadspi.h"


//Error Code
#define ADS9226_HAL_OK 0
#define ADS9226_HAL_ERROR 1
#define ADS9226_HAL_BUSY 2
#define ADS9226_HAL_TIMEOUT 3
#define CMD_ERROR  4
#define CMD_OK  5


uint8_t ADS9226_ReadOnce(uint8_t *data,uint8_t size);
//uint8_t W25QXX_Read(uint8_t *pBuf, uint32_t ReadAddr, uint32_t ReadSize);


#ifdef __cplusplus
}
#endif
#endif /*__ w25qxx_H */
