################################################################################
# 自动生成的文件。不要编辑！
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../LiteOS/targets/STM32F103VET6_NB_GCC/GCC/startup_stm32f103xe.s 

OBJS += \
./LiteOS/targets/STM32F103VET6_NB_GCC/GCC/startup_stm32f103xe.o 

S_DEPS += \
./LiteOS/targets/STM32F103VET6_NB_GCC/GCC/startup_stm32f103xe.d 


# Each subdirectory must supply rules for building sources it contributes
LiteOS/targets/STM32F103VET6_NB_GCC/GCC/%.o: ../LiteOS/targets/STM32F103VET6_NB_GCC/GCC/%.s LiteOS/targets/STM32F103VET6_NB_GCC/GCC/subdir.mk
	arm-none-eabi-gcc -mcpu=cortex-m4 -g3 -DDEBUG -c -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" "$<"

