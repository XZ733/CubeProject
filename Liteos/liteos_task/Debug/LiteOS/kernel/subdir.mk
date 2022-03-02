################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../LiteOS/kernel/los_init.c 

OBJS += \
./LiteOS/kernel/los_init.o 

C_DEPS += \
./LiteOS/kernel/los_init.d 


# Each subdirectory must supply rules for building sources it contributes
LiteOS/kernel/%.o: ../LiteOS/kernel/%.c LiteOS/kernel/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32G474xx -c -I../Core/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32G4xx/Include -I../Drivers/CMSIS/Include -I"../LiteOS/osdepends/liteos/cmsis" -I"../LiteOS/OS_CONFIG" -I"../LiteOS/kernel/include" -I"../LiteOS/kernel/extended/include" -I../LiteOS/arch/arm/arm-m/include -I"../LiteOS/kernel/base/include" -I"../LiteOS/arch/arm/common/cmsis" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-LiteOS-2f-kernel

clean-LiteOS-2f-kernel:
	-$(RM) ./LiteOS/kernel/los_init.d ./LiteOS/kernel/los_init.o

.PHONY: clean-LiteOS-2f-kernel

