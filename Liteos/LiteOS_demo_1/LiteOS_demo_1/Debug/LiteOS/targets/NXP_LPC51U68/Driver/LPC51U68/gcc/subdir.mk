################################################################################
# 自动生成的文件。不要编辑！
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_UPPER_SRCS += \
../LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/gcc/startup_LPC51U68.S 

OBJS += \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/gcc/startup_LPC51U68.o 

S_UPPER_DEPS += \
./LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/gcc/startup_LPC51U68.d 


# Each subdirectory must supply rules for building sources it contributes
LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/gcc/%.o: ../LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/gcc/%.S LiteOS/targets/NXP_LPC51U68/Driver/LPC51U68/gcc/subdir.mk
	arm-none-eabi-gcc -mcpu=cortex-m4 -g3 -DDEBUG -c -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" "$<"

