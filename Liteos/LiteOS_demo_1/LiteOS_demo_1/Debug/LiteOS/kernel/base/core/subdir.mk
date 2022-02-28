################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../LiteOS/kernel/base/core/los_priqueue.c \
../LiteOS/kernel/base/core/los_swtmr.c \
../LiteOS/kernel/base/core/los_sys.c \
../LiteOS/kernel/base/core/los_task.c \
../LiteOS/kernel/base/core/los_tick.c \
../LiteOS/kernel/base/core/los_timeslice.c 

OBJS += \
./LiteOS/kernel/base/core/los_priqueue.o \
./LiteOS/kernel/base/core/los_swtmr.o \
./LiteOS/kernel/base/core/los_sys.o \
./LiteOS/kernel/base/core/los_task.o \
./LiteOS/kernel/base/core/los_tick.o \
./LiteOS/kernel/base/core/los_timeslice.o 

C_DEPS += \
./LiteOS/kernel/base/core/los_priqueue.d \
./LiteOS/kernel/base/core/los_swtmr.d \
./LiteOS/kernel/base/core/los_sys.d \
./LiteOS/kernel/base/core/los_task.d \
./LiteOS/kernel/base/core/los_tick.d \
./LiteOS/kernel/base/core/los_timeslice.d 


# Each subdirectory must supply rules for building sources it contributes
LiteOS/kernel/base/core/%.o: ../LiteOS/kernel/base/core/%.c LiteOS/kernel/base/core/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32G474xx -c -I../Core/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32G4xx/Include -I../Drivers/CMSIS/Include -I../LiteOS/arch/arm/arm-m/include -I../LiteOS/arch/arm/common/cmsis -I../LiteOS/kernel/base/include -I../LiteOS/kernel/extended/include -I../LiteOS/kernel/include -I../LiteOS/OS_CONFIG -I../LiteOS/osdepends/liteos/cmsis -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-LiteOS-2f-kernel-2f-base-2f-core

clean-LiteOS-2f-kernel-2f-base-2f-core:
	-$(RM) ./LiteOS/kernel/base/core/los_priqueue.d ./LiteOS/kernel/base/core/los_priqueue.o ./LiteOS/kernel/base/core/los_swtmr.d ./LiteOS/kernel/base/core/los_swtmr.o ./LiteOS/kernel/base/core/los_sys.d ./LiteOS/kernel/base/core/los_sys.o ./LiteOS/kernel/base/core/los_task.d ./LiteOS/kernel/base/core/los_task.o ./LiteOS/kernel/base/core/los_tick.d ./LiteOS/kernel/base/core/los_tick.o ./LiteOS/kernel/base/core/los_timeslice.d ./LiteOS/kernel/base/core/los_timeslice.o

.PHONY: clean-LiteOS-2f-kernel-2f-base-2f-core

