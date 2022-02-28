################################################################################
# 自动生成的文件。不要编辑！
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_UPPER_SRCS += \
../LiteOS/arch/arm/arm-m/cortex-m4/iar/los_dispatch_iar.S \
../LiteOS/arch/arm/arm-m/cortex-m4/iar/los_hw_exc_iar.S 

OBJS += \
./LiteOS/arch/arm/arm-m/cortex-m4/iar/los_dispatch_iar.o \
./LiteOS/arch/arm/arm-m/cortex-m4/iar/los_hw_exc_iar.o 

S_UPPER_DEPS += \
./LiteOS/arch/arm/arm-m/cortex-m4/iar/los_dispatch_iar.d \
./LiteOS/arch/arm/arm-m/cortex-m4/iar/los_hw_exc_iar.d 


# Each subdirectory must supply rules for building sources it contributes
LiteOS/arch/arm/arm-m/cortex-m4/iar/%.o: ../LiteOS/arch/arm/arm-m/cortex-m4/iar/%.S LiteOS/arch/arm/arm-m/cortex-m4/iar/subdir.mk
	arm-none-eabi-gcc -mcpu=cortex-m4 -g3 -DDEBUG -c -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" "$<"

