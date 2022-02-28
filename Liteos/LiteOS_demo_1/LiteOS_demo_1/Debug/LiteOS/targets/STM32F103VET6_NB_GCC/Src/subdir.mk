################################################################################
# 自动生成的文件。不要编辑！
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../LiteOS/targets/STM32F103VET6_NB_GCC/Src/at_hal.c \
../LiteOS/targets/STM32F103VET6_NB_GCC/Src/main.c \
../LiteOS/targets/STM32F103VET6_NB_GCC/Src/stm32f1xx_hal_msp.c \
../LiteOS/targets/STM32F103VET6_NB_GCC/Src/stm32f1xx_it.c \
../LiteOS/targets/STM32F103VET6_NB_GCC/Src/system_stm32f1xx.c \
../LiteOS/targets/STM32F103VET6_NB_GCC/Src/usart.c 

OBJS += \
./LiteOS/targets/STM32F103VET6_NB_GCC/Src/at_hal.o \
./LiteOS/targets/STM32F103VET6_NB_GCC/Src/main.o \
./LiteOS/targets/STM32F103VET6_NB_GCC/Src/stm32f1xx_hal_msp.o \
./LiteOS/targets/STM32F103VET6_NB_GCC/Src/stm32f1xx_it.o \
./LiteOS/targets/STM32F103VET6_NB_GCC/Src/system_stm32f1xx.o \
./LiteOS/targets/STM32F103VET6_NB_GCC/Src/usart.o 

C_DEPS += \
./LiteOS/targets/STM32F103VET6_NB_GCC/Src/at_hal.d \
./LiteOS/targets/STM32F103VET6_NB_GCC/Src/main.d \
./LiteOS/targets/STM32F103VET6_NB_GCC/Src/stm32f1xx_hal_msp.d \
./LiteOS/targets/STM32F103VET6_NB_GCC/Src/stm32f1xx_it.d \
./LiteOS/targets/STM32F103VET6_NB_GCC/Src/system_stm32f1xx.d \
./LiteOS/targets/STM32F103VET6_NB_GCC/Src/usart.d 


# Each subdirectory must supply rules for building sources it contributes
LiteOS/targets/STM32F103VET6_NB_GCC/Src/%.o: ../LiteOS/targets/STM32F103VET6_NB_GCC/Src/%.c LiteOS/targets/STM32F103VET6_NB_GCC/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32G474xx -c -I../Core/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32G4xx/Include -I../Drivers/CMSIS/Include -I../LiteOS/arch/arm/arm-m/include -I../LiteOS/arch/arm/common/cmsis -I../LiteOS/kernel/base/include -I../LiteOS/kernel/extended/include -I../LiteOS/kernel/include -I../LiteOS/OS_CONFIG -I../LiteOS/osdepends/liteos/cmsis -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

