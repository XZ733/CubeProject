#include "AD7606.h"

HAL_StatusTypeDef AD7606_Read(uint8_t *Data_H, uint8_t *Data_L,
		uint16_t Timeout) {

	HAL_StatusTypeDef Error_Code = HAL_OK;

	uint32_t tickstart;
	tickstart = HAL_GetTick();

	//SPI1主机配置
	hspi1.State = HAL_SPI_STATE_BUSY_RX;
	hspi1.pRxBuffPtr = (uint8_t*) (Data_H);
	hspi1.RxXferCount = 1;
	hspi1.RxXferSize = 1;
	hspi1.pTxBuffPtr = (uint8_t*) (NULL);
	hspi1.TxXferCount = 1U;
	hspi1.TxXferSize = 1U;

	//SPI1从机配置
	hspi2.State = HAL_SPI_STATE_BUSY_RX;
	hspi2.pRxBuffPtr = (uint8_t*) (Data_L);
	hspi2.RxXferSize = 1;
	hspi2.RxXferCount = 1;
	hspi2.pTxBuffPtr = (uint8_t*) NULL;
	hspi2.TxXferSize = 0U;
	hspi2.TxXferCount = 0U;

	//设置FIFO
	SET_BIT(hspi1.Instance->CR2, SPI_RXFIFO_THRESHOLD);
	SET_BIT(hspi2.Instance->CR2, SPI_RXFIFO_THRESHOLD);

	//SPI1,SPI2使能
	if ((hspi1.Instance->CR1 & SPI_CR1_SPE) != SPI_CR1_SPE) {
		__HAL_SPI_ENABLE(&hspi1);
	}
	if ((hspi2.Instance->CR1 & SPI_CR1_SPE) != SPI_CR1_SPE) {
		__HAL_SPI_ENABLE(&hspi2);
	}

	//SPI1主机发送
	*(__IO uint8_t*) &hspi1.Instance->DR = (*(hspi1.pTxBuffPtr));

	//SPI1主机接收
	while (hspi1.RxXferCount == 1U) {

		if ((__HAL_SPI_GET_FLAG((&hspi1), SPI_FLAG_RXNE))) {
			(*(uint8_t*) (hspi1.pRxBuffPtr)) =
					(*(__IO uint8_t*) &hspi1.Instance->DR);
			hspi1.RxXferCount--;
		}

		if ((((HAL_GetTick() - tickstart) >= Timeout)
				&& ((Timeout != HAL_MAX_DELAY))) || (Timeout == 0U)) {
			Error_Code = HAL_TIMEOUT;
			goto Overtime;
		}
	}

	//SPI2从机接收
	while (hspi2.RxXferCount == 1U) {

		if (__HAL_SPI_GET_FLAG(&hspi2, SPI_FLAG_RXNE)) {
			(*(uint8_t*) (hspi2.pRxBuffPtr)) =
					(*(__IO uint8_t*) &hspi2.Instance->DR);
			hspi2.RxXferCount--;
		}

		if ((((HAL_GetTick() - tickstart) >= Timeout)
				&& (Timeout != HAL_MAX_DELAY)) || (Timeout == 0U)) {
			Error_Code = HAL_TIMEOUT;
			goto Overtime;
		}
	}

	Overtime: hspi1.State = HAL_SPI_STATE_READY;
		   	  hspi2.State = HAL_SPI_STATE_READY;

	return Error_Code;
}
