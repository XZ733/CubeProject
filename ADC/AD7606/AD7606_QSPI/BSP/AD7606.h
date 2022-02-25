#ifndef __AD7606_H
#define __AD7606_H
#ifdef __cplusplus
 extern "C" {
#endif

#include "main.h"
#include "quadspi.h"


//Error Code
#define AD7606_HAL_OK 0
#define AD7606_HAL_ERROR 1
#define AD7606_HAL_BUSY 2
#define AD7606_HAL_TIMEOUT 3
#define CMD_ERROR  4
#define CMD_OK  5


uint8_t AD7606_ReadOnce(uint8_t *data,uint8_t size);
//uint8_t W25QXX_Read(uint8_t *pBuf, uint32_t ReadAddr, uint32_t ReadSize);


#ifdef __cplusplus
}
#endif
#endif /*__ w25qxx_H */
