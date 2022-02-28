################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_UPPER_SRCS += \
../LiteOS/arch/arm/arm-m/cortex-m4/gcc/los_dispatch_gcc.S 

OBJS += \
./LiteOS/arch/arm/arm-m/cortex-m4/gcc/los_dispatch_gcc.o 

S_UPPER_DEPS += \
./LiteOS/arch/arm/arm-m/cortex-m4/gcc/los_dispatch_gcc.d 


# Each subdirectory must supply rules for building sources it contributes
LiteOS/arch/arm/arm-m/cortex-m4/gcc/%.o: ../LiteOS/arch/arm/arm-m/cortex-m4/gcc/%.S LiteOS/arch/arm/arm-m/cortex-m4/gcc/subdir.mk
	arm-none-eabi-gcc -mcpu=cortex-m4 -g3 -DDEBUG -c -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" "$<"

clean: clean-LiteOS-2f-arch-2f-arm-2f-arm-2d-m-2f-cortex-2d-m4-2f-gcc

clean-LiteOS-2f-arch-2f-arm-2f-arm-2d-m-2f-cortex-2d-m4-2f-gcc:
	-$(RM) ./LiteOS/arch/arm/arm-m/cortex-m4/gcc/los_dispatch_gcc.d ./LiteOS/arch/arm/arm-m/cortex-m4/gcc/los_dispatch_gcc.o

.PHONY: clean-LiteOS-2f-arch-2f-arm-2f-arm-2d-m-2f-cortex-2d-m4-2f-gcc

