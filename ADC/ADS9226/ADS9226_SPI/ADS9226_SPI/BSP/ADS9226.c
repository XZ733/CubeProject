#include "ADS9226.h"

HAL_StatusTypeDef ADS9226_Read(uint8_t *Data_0, uint8_t *Data_1,
		uint16_t Timeout) {

	HAL_StatusTypeDef Error_Code = HAL_OK;

	uint32_t tickstart;
	tickstart = HAL_GetTick();

	//SPI1主机配置
	hspi1.State = HAL_SPI_STATE_BUSY_RX;
	hspi1.pRxBuffPtr = (uint8_t*) (Data_0);
	hspi1.RxXferCount = 1;
	hspi1.RxXferSize = 1;
	hspi1.pTxBuffPtr = (uint8_t*) (NULL);
	hspi1.TxXferCount = 1U;
	hspi1.TxXferSize = 1U;

	//SPI1从机配置
	hspi2.State = HAL_SPI_STATE_BUSY_RX;
	hspi2.pRxBuffPtr = (uint8_t*) (Data_1);
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




void DecToBin(const uint16_t dec, uint8_t* pbin)
{
    uint16_t ys = 0;  // 余数
    uint16_t s = dec;  // 商
    uint16_t ii = 0;   // 位数的计数器
    uint8_t result[65];  // 十进制转换成二进制后，保存在result中，再反过来存放到pbin中

    memset(result, 0, sizeof(result));

    // 把十进制转换为二进制，存放在result中。
    while (s > 0)
    {
        ys = s % 2;
        s = s / 2;
        result[ii] = ys + '0';
        ii++;
    }
    //补足8位
    if (ii < 8) {
        for (uint16_t i = ii; i < 8; i++) {
            result[i] = '0';
            ii++;
        }
    }

    // 再把result字符串反过来，存放在pbin中。
    uint16_t jj = 0;
    for (; ii > 0; ii--)
    {
        pbin[jj] = result[ii - 1];
        jj++;
    }

    //pbin[jj] = 0; // 出于安全的考虑，加上0表示字符串结束。
}

uint16_t BinToDect(uint8_t* str)
{
    uint16_t dec = 0;

    for (uint16_t i = 0; i < 16; i++) {
        if (str[i] == '1') dec += pow(2, 15 - i);
    }

    return dec;
}


uint16_t add(uint16_t data1, uint16_t data0) {
    uint8_t str1[9] = "00000000", str0[9] = "00000000";
    DecToBin(data1, str1);
    DecToBin(data0, str0);
    printf("data1: %d str1: %s \r\n", data1, str1);
    printf("data0: %d str2: %s \r\n", data0, str0);


    uint8_t str[17] = "0000000000000000";

    for (uint16_t i = 0; i < 16; i++) {
        if (i % 2 == 0) str[i] = str1[i / 2];
        else if (i % 2 == 1) str[i] = str0[(i-1) / 2];
    }

    printf("str: %s ", str);

    uint16_t sum = BinToDect(str);

    return sum;
}

