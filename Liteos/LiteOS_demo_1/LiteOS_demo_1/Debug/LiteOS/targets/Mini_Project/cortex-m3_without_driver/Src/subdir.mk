################################################################################
# 自动生成的文件。不要编辑！
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../LiteOS/targets/Mini_Project/cortex-m3_without_driver/Src/__hal_simulate.c \
../LiteOS/targets/Mini_Project/cortex-m3_without_driver/Src/main.c \
../LiteOS/targets/Mini_Project/cortex-m3_without_driver/Src/user_task.c 

OBJS += \
./LiteOS/targets/Mini_Project/cortex-m3_without_driver/Src/__hal_simulate.o \
./LiteOS/targets/Mini_Project/cortex-m3_without_driver/Src/main.o \
./LiteOS/targets/Mini_Project/cortex-m3_without_driver/Src/user_task.o 

C_DEPS += \
./LiteOS/targets/Mini_Project/cortex-m3_without_driver/Src/__hal_simulate.d \
./LiteOS/targets/Mini_Project/cortex-m3_without_driver/Src/main.d \
./LiteOS/targets/Mini_Project/cortex-m3_without_driver/Src/user_task.d 


# Each subdirectory must supply rules for building sources it contributes
LiteOS/targets/Mini_Project/cortex-m3_without_driver/Src/%.o: ../LiteOS/targets/Mini_Project/cortex-m3_without_driver/Src/%.c LiteOS/targets/Mini_Project/cortex-m3_without_driver/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32G474xx -c -I../Core/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32G4xx/Include -I../Drivers/CMSIS/Include -I../LiteOS/arch/arm/arm-m/include -I../LiteOS/arch/arm/common/cmsis -I../LiteOS/kernel/base/include -I../LiteOS/kernel/extended/include -I../LiteOS/kernel/include -I../LiteOS/OS_CONFIG -I../LiteOS/osdepends/liteos/cmsis -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

