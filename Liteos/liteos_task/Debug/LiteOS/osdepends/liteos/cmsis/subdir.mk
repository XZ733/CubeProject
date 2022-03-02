################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../LiteOS/osdepends/liteos/cmsis/cmsis_liteos.c 

OBJS += \
./LiteOS/osdepends/liteos/cmsis/cmsis_liteos.o 

C_DEPS += \
./LiteOS/osdepends/liteos/cmsis/cmsis_liteos.d 


# Each subdirectory must supply rules for building sources it contributes
LiteOS/osdepends/liteos/cmsis/%.o: ../LiteOS/osdepends/liteos/cmsis/%.c LiteOS/osdepends/liteos/cmsis/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32G474xx -c -I../Core/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32G4xx/Include -I../Drivers/CMSIS/Include -I"../LiteOS/osdepends/liteos/cmsis" -I"../LiteOS/OS_CONFIG" -I"../LiteOS/kernel/include" -I"../LiteOS/kernel/extended/include" -I../LiteOS/arch/arm/arm-m/include -I"../LiteOS/kernel/base/include" -I"../LiteOS/arch/arm/common/cmsis" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-LiteOS-2f-osdepends-2f-liteos-2f-cmsis

clean-LiteOS-2f-osdepends-2f-liteos-2f-cmsis:
	-$(RM) ./LiteOS/osdepends/liteos/cmsis/cmsis_liteos.d ./LiteOS/osdepends/liteos/cmsis/cmsis_liteos.o

.PHONY: clean-LiteOS-2f-osdepends-2f-liteos-2f-cmsis

