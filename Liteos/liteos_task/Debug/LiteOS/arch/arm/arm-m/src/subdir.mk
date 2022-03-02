################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../LiteOS/arch/arm/arm-m/src/los_hw.c \
../LiteOS/arch/arm/arm-m/src/los_hw_tick.c \
../LiteOS/arch/arm/arm-m/src/los_hwi.c 

OBJS += \
./LiteOS/arch/arm/arm-m/src/los_hw.o \
./LiteOS/arch/arm/arm-m/src/los_hw_tick.o \
./LiteOS/arch/arm/arm-m/src/los_hwi.o 

C_DEPS += \
./LiteOS/arch/arm/arm-m/src/los_hw.d \
./LiteOS/arch/arm/arm-m/src/los_hw_tick.d \
./LiteOS/arch/arm/arm-m/src/los_hwi.d 


# Each subdirectory must supply rules for building sources it contributes
LiteOS/arch/arm/arm-m/src/%.o: ../LiteOS/arch/arm/arm-m/src/%.c LiteOS/arch/arm/arm-m/src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32G474xx -c -I../Core/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32G4xx/Include -I../Drivers/CMSIS/Include -I"../LiteOS/osdepends/liteos/cmsis" -I"../LiteOS/OS_CONFIG" -I"../LiteOS/kernel/include" -I"../LiteOS/kernel/extended/include" -I../LiteOS/arch/arm/arm-m/include -I"../LiteOS/kernel/base/include" -I"../LiteOS/arch/arm/common/cmsis" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-LiteOS-2f-arch-2f-arm-2f-arm-2d-m-2f-src

clean-LiteOS-2f-arch-2f-arm-2f-arm-2d-m-2f-src:
	-$(RM) ./LiteOS/arch/arm/arm-m/src/los_hw.d ./LiteOS/arch/arm/arm-m/src/los_hw.o ./LiteOS/arch/arm/arm-m/src/los_hw_tick.d ./LiteOS/arch/arm/arm-m/src/los_hw_tick.o ./LiteOS/arch/arm/arm-m/src/los_hwi.d ./LiteOS/arch/arm/arm-m/src/los_hwi.o

.PHONY: clean-LiteOS-2f-arch-2f-arm-2f-arm-2d-m-2f-src

