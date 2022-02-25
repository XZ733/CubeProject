#include "AD7606.h"

extern uint8_t BUSY_Flag;

void AD7606_StartConvst(void);
void AD7606_Reset(void);



HAL_StatusTypeDef bsp_AD7606_Read(double *Data,uint8_t Size,uint16_t Timeout) {

	uint16_t Raw_Data[Size];

	int i;

	HAL_StatusTypeDef Error_Code = HAL_OK;

	uint8_t  txallowed = 1U;

	AD7606_StartConvst();

	while(BUSY_Flag == 0) {}

	CS_0();

	uint32_t tickstart;
	tickstart = HAL_GetTick();

	//SPI1主机配置
	hspi1.State = HAL_SPI_STATE_BUSY_RX;
	hspi1.pRxBuffPtr = (uint8_t*) (Raw_Data);
	hspi1.RxXferCount = Size;
	hspi1.RxXferSize = Size;
	hspi1.pTxBuffPtr = (uint8_t*) (NULL);
	hspi1.TxXferCount = Size;
	hspi1.TxXferSize = Size;

	//设置FIFO
	CLEAR_BIT(hspi1.Instance->CR2, SPI_RXFIFO_THRESHOLD);

	//SPI1
	if ((hspi1.Instance->CR1 & SPI_CR1_SPE) != SPI_CR1_SPE) {
		__HAL_SPI_ENABLE(&hspi1);
	}

    while ((hspi1.TxXferCount > 0U) || (hspi1.RxXferCount > 0U))
    {
      /* Check TXE flag */
      if ((__HAL_SPI_GET_FLAG(&hspi1, SPI_FLAG_TXE)) && (hspi1.TxXferCount > 0U) && (txallowed == 1U))
      {
    	*(__IO uint16_t *)&hspi1.Instance->DR = *((uint16_t *)(hspi1.pTxBuffPtr));
        hspi1.pTxBuffPtr += sizeof(uint16_t);
        hspi1.TxXferCount--;

        txallowed = 0U;

      }

      /* Check RXNE flag */
      if ((__HAL_SPI_GET_FLAG(&hspi1, SPI_FLAG_RXNE)) && (hspi1.RxXferCount > 0U))
      {
        *((uint16_t *)hspi1.pRxBuffPtr) = *(__IO uint16_t *)&hspi1.Instance->DR;
        hspi1.pRxBuffPtr += sizeof(uint16_t);
        hspi1.RxXferCount--;
        /* Next Data is a Transmission (Tx). Tx is allowed */
        txallowed = 1U;
      }

      if (((HAL_GetTick() - tickstart) >=  Timeout) && (Timeout != HAL_MAX_DELAY))
      {
    	Error_Code = HAL_TIMEOUT;
        goto Overtime;
      }
    }

	CS_1();

	for(i = 0;i <= Size-1;i++)
	{
		Data[i] = ((int16_t)Raw_Data[i])*10.0/65536.0;
	}


	Overtime: hspi1.State = HAL_SPI_STATE_READY;

	return Error_Code;
}

void bsp_AD7606_Init(void)
{


	//AD7606_SetOS(AD_OS_NO);		/* 无过采样 */
	//AD7606_SetInputRange(0);	/* 0表示输入量程为正负5V, 1表示正负10V */
	AD7606_Reset();				/* 复位 */
	CONVST_1();					/* 启动转换的GPIO，平时设置为高 */
}



void AD7606_Reset(void)
{
	RESET_0();	/* 退出复位状态 */

	RESET_1();	/* 进入复位状态 */
	HAL_Delay(100);

	RESET_0();	/* 退出复位状态 */
}

void AD7606_StartConvst(void)
{
	/* page 7：  CONVST 高电平脉冲宽度和低电平脉冲宽度最短 25ns */
	/* CONVST平时为高 */
	CONVST_0();
	HAL_Delay(200);

	CONVST_1();
}



