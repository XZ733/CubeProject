################################################################################
# 自动生成的文件。不要编辑！
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/at_hal.c \
../LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/board.c \
../LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/bootloader_recover.c \
../LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/dwt.c \
../LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/eth.c \
../LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/fatfs_hal.c \
../LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/flash_adaptor.c \
../LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/main.c \
../LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/ota_port.c \
../LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/spiffs_hal.c \
../LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/sys_init.c \
../LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/system_stm32f4xx.c \
../LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/usart.c \
../LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/user_task.c 

OBJS += \
./LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/at_hal.o \
./LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/board.o \
./LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/bootloader_recover.o \
./LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/dwt.o \
./LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/eth.o \
./LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/fatfs_hal.o \
./LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/flash_adaptor.o \
./LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/main.o \
./LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/ota_port.o \
./LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/spiffs_hal.o \
./LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/sys_init.o \
./LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/system_stm32f4xx.o \
./LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/usart.o \
./LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/user_task.o 

C_DEPS += \
./LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/at_hal.d \
./LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/board.d \
./LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/bootloader_recover.d \
./LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/dwt.d \
./LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/eth.d \
./LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/fatfs_hal.d \
./LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/flash_adaptor.d \
./LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/main.d \
./LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/ota_port.d \
./LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/spiffs_hal.d \
./LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/sys_init.d \
./LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/system_stm32f4xx.d \
./LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/usart.d \
./LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/user_task.d 


# Each subdirectory must supply rules for building sources it contributes
LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/%.o: ../LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/%.c LiteOS/targets/Cloud_STM32F429IGTx_FIRE/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32G474xx -c -I../Core/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32G4xx/Include -I../Drivers/CMSIS/Include -I../LiteOS/arch/arm/arm-m/include -I../LiteOS/arch/arm/common/cmsis -I../LiteOS/kernel/base/include -I../LiteOS/kernel/extended/include -I../LiteOS/kernel/include -I../LiteOS/OS_CONFIG -I../LiteOS/osdepends/liteos/cmsis -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

