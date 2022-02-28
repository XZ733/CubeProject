################################################################################
# 自动生成的文件。不要编辑！
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../LiteOS/targets/Cloud_STM32F429IGTx_FIRE/EWARM/los_startup_iar.s 

OBJS += \
./LiteOS/targets/Cloud_STM32F429IGTx_FIRE/EWARM/los_startup_iar.o 

S_DEPS += \
./LiteOS/targets/Cloud_STM32F429IGTx_FIRE/EWARM/los_startup_iar.d 


# Each subdirectory must supply rules for building sources it contributes
LiteOS/targets/Cloud_STM32F429IGTx_FIRE/EWARM/%.o: ../LiteOS/targets/Cloud_STM32F429IGTx_FIRE/EWARM/%.s LiteOS/targets/Cloud_STM32F429IGTx_FIRE/EWARM/subdir.mk
	arm-none-eabi-gcc -mcpu=cortex-m4 -g3 -DDEBUG -c -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" "$<"

