################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../LiteOS/kernel/base/mem/common/los_memcheck.c \
../LiteOS/kernel/base/mem/common/los_memstat.c \
../LiteOS/kernel/base/mem/common/los_slab.c \
../LiteOS/kernel/base/mem/common/los_slabmem.c 

OBJS += \
./LiteOS/kernel/base/mem/common/los_memcheck.o \
./LiteOS/kernel/base/mem/common/los_memstat.o \
./LiteOS/kernel/base/mem/common/los_slab.o \
./LiteOS/kernel/base/mem/common/los_slabmem.o 

C_DEPS += \
./LiteOS/kernel/base/mem/common/los_memcheck.d \
./LiteOS/kernel/base/mem/common/los_memstat.d \
./LiteOS/kernel/base/mem/common/los_slab.d \
./LiteOS/kernel/base/mem/common/los_slabmem.d 


# Each subdirectory must supply rules for building sources it contributes
LiteOS/kernel/base/mem/common/%.o: ../LiteOS/kernel/base/mem/common/%.c LiteOS/kernel/base/mem/common/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32G474xx -c -I../Core/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32G4xx/Include -I../Drivers/CMSIS/Include -I../LiteOS/arch/arm/arm-m/include -I../LiteOS/arch/arm/common/cmsis -I../LiteOS/kernel/base/include -I../LiteOS/kernel/extended/include -I../LiteOS/kernel/include -I../LiteOS/OS_CONFIG -I../LiteOS/osdepends/liteos/cmsis -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-LiteOS-2f-kernel-2f-base-2f-mem-2f-common

clean-LiteOS-2f-kernel-2f-base-2f-mem-2f-common:
	-$(RM) ./LiteOS/kernel/base/mem/common/los_memcheck.d ./LiteOS/kernel/base/mem/common/los_memcheck.o ./LiteOS/kernel/base/mem/common/los_memstat.d ./LiteOS/kernel/base/mem/common/los_memstat.o ./LiteOS/kernel/base/mem/common/los_slab.d ./LiteOS/kernel/base/mem/common/los_slab.o ./LiteOS/kernel/base/mem/common/los_slabmem.d ./LiteOS/kernel/base/mem/common/los_slabmem.o

.PHONY: clean-LiteOS-2f-kernel-2f-base-2f-mem-2f-common

