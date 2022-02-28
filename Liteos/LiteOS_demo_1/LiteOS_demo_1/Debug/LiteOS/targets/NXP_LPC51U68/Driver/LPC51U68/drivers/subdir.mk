################################################################################
# 自动生成的文件。不要编辑！
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_adc.c \
../LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_clock.c \
../LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_common.c \
../LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_crc.c \
../LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_ctimer.c \
../LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_dma.c \
../LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_flashiap.c \
../LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_flexcomm.c \
../LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_fmeas.c \
../LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_gint.c \
../LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_gpio.c \
../LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_i2c.c \
../LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_i2c_dma.c \
../LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_i2s.c \
../LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_i2s_dma.c \
../LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_inputmux.c \
../LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_mrt.c \
../LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_pint.c \
../LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_power.c \
../LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_reset.c \
../LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_rtc.c \
../LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_sctimer.c \
../LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_spi.c \
../LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_spi_dma.c \
../LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_usart.c \
../LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_usart_dma.c \
../LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_utick.c \
../LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_wwdt.c 

OBJS += \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_adc.o \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_clock.o \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_common.o \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_crc.o \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_ctimer.o \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_dma.o \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_flashiap.o \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_flexcomm.o \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_fmeas.o \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_gint.o \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_gpio.o \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_i2c.o \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_i2c_dma.o \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_i2s.o \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_i2s_dma.o \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_inputmux.o \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_mrt.o \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_pint.o \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_power.o \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_reset.o \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_rtc.o \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_sctimer.o \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_spi.o \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_spi_dma.o \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_usart.o \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_usart_dma.o \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_utick.o \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_wwdt.o 

C_DEPS += \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_adc.d \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_clock.d \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_common.d \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_crc.d \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_ctimer.d \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_dma.d \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_flashiap.d \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_flexcomm.d \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_fmeas.d \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_gint.d \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_gpio.d \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_i2c.d \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_i2c_dma.d \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_i2s.d \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_i2s_dma.d \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_inputmux.d \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_mrt.d \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_pint.d \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_power.d \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_reset.d \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_rtc.d \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_sctimer.d \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_spi.d \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_spi_dma.d \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_usart.d \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_usart_dma.d \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_utick.d \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/fsl_wwdt.d 


# Each subdirectory must supply rules for building sources it contributes
LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/%.o: ../LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/%.c LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/drivers/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32G474xx -c -I../Core/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32G4xx/Include -I../Drivers/CMSIS/Include -I../LiteOS/arch/arm/arm-m/include -I../LiteOS/arch/arm/common/cmsis -I../LiteOS/kernel/base/include -I../LiteOS/kernel/extended/include -I../LiteOS/kernel/include -I../LiteOS/OS_CONFIG -I../LiteOS/osdepends/liteos/cmsis -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

