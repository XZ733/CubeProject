#include "AD7606.h"

/**
 * @brief	QSPI发送命令
 *
 * @param   instruction		要发送的指令
 * @param   address			发送到的目的地址
 * @param   dummyCycles		空指令周期数
 * @param   addressMode		地址模式; QSPI_ADDRESS_NONE,QSPI_ADDRESS_1_LINE,QSPI_ADDRESS_2_LINES,QSPI_ADDRESS_4_LINES
 * @param   dataMode		数据模式; QSPI_DATA_NONE,QSPI_DATA_1_LINE,QSPI_DATA_2_LINES,QSPI_DATA_4_LINES
 * @param   dataSize        待传输的数据长度
 *
 * @return  uint8_t			QSPI_OK:正常
 *                      QSPI_ERROR:错误
 */
uint8_t AD7606_Send_CMD(uint32_t dataSize)
{
    QSPI_CommandTypeDef Cmdhandler;

    //没什么用的参数
    Cmdhandler.Instruction        = 0xFF;
    Cmdhandler.Address            = 0x00;
    Cmdhandler.AlternateBytes     = 0x00;
    Cmdhandler.AddressSize        = QSPI_ADDRESS_8_BITS;
    Cmdhandler.AlternateBytesSize = QSPI_ALTERNATE_BYTES_8_BITS;

    //没用的字段
    Cmdhandler.DummyCycles        = 0;
    Cmdhandler.InstructionMode    = QSPI_INSTRUCTION_1_LINE;
    Cmdhandler.AddressMode        = QSPI_ADDRESS_NONE;
    Cmdhandler.AlternateByteMode  = QSPI_ALTERNATE_BYTES_NONE;

    //数据输入配置
    Cmdhandler.DataMode           = QSPI_DATA_2_LINES;
    Cmdhandler.NbData             = dataSize;
    Cmdhandler.DdrMode            = QSPI_DDR_MODE_DISABLE;
    Cmdhandler.DdrHoldHalfCycle   = QSPI_DDR_HHC_ANALOG_DELAY;
    Cmdhandler.SIOOMode           = QSPI_SIOO_INST_EVERY_CMD;

    if(HAL_QSPI_Command(&hqspi1, &Cmdhandler, 5000) != HAL_OK)
      return CMD_ERROR;

    return CMD_OK;
}

uint8_t AD7606_ReadOnce(uint8_t *data,uint8_t size)
{
	uint8_t state;

    if(AD7606_Send_CMD(size) == CMD_ERROR)
    	return CMD_ERROR;

    state = HAL_QSPI_Receive(&hqspi1, data, 5000);
    return state;

}

