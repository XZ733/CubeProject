################################################################################
# 自动生成的文件。不要编辑！
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../LiteOS/targets/NXP_LPC51U68/GCC/startup_LPC51U68.s 

OBJS += \
./LiteOS/targets/NXP_LPC51U68/GCC/startup_LPC51U68.o 

S_DEPS += \
./LiteOS/targets/NXP_LPC51U68/GCC/startup_LPC51U68.d 


# Each subdirectory must supply rules for building sources it contributes
LiteOS/targets/NXP_LPC51U68/GCC/%.o: ../LiteOS/targets/NXP_LPC51U68/GCC/%.s LiteOS/targets/NXP_LPC51U68/GCC/subdir.mk
	arm-none-eabi-gcc -mcpu=cortex-m4 -g3 -DDEBUG -c -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" "$<"

