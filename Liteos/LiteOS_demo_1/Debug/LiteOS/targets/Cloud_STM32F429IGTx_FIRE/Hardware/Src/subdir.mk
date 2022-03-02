################################################################################
# 自动生成的文件。不要编辑！
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Hardware/Src/hal_flash.c \
../LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Hardware/Src/hal_iwdg.c \
../LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Hardware/Src/hal_rng.c \
../LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Hardware/Src/hal_spi_flash.c 

OBJS += \
./LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Hardware/Src/hal_flash.o \
./LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Hardware/Src/hal_iwdg.o \
./LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Hardware/Src/hal_rng.o \
./LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Hardware/Src/hal_spi_flash.o 

C_DEPS += \
./LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Hardware/Src/hal_flash.d \
./LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Hardware/Src/hal_iwdg.d \
./LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Hardware/Src/hal_rng.d \
./LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Hardware/Src/hal_spi_flash.d 


# Each subdirectory must supply rules for building sources it contributes
LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Hardware/Src/%.o: ../LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Hardware/Src/%.c LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Hardware/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32G474xx -c -I../Core/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32G4xx/Include -I../Drivers/CMSIS/Include -I../LiteOS/arch/arm/arm-m/include -I../LiteOS/arch/arm/common/cmsis -I../LiteOS/kernel/base/include -I../LiteOS/kernel/extended/include -I../LiteOS/kernel/include -I../LiteOS/OS_CONFIG -I../LiteOS/osdepends/liteos/cmsis -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

