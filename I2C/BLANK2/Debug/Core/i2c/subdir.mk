################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/i2c/i2c.c 

OBJS += \
./Core/i2c/i2c.o 

C_DEPS += \
./Core/i2c/i2c.d 


# Each subdirectory must supply rules for building sources it contributes
Core/i2c/i2c.o: ../Core/i2c/i2c.c Core/i2c/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32G474xx -c -I../Core/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32G4xx/Include -I../Drivers/CMSIS/Include -I"F:/STM32CubeIDE/workspace_1.6.1/BLANK2/Core/i2c" -I"F:/STM32CubeIDE/workspace_1.6.1/BLANK2/Core/oled" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/i2c/i2c.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

