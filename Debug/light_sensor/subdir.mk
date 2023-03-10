################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../light_sensor/isl76682.c 

C_DEPS += \
./light_sensor/isl76682.d 

OBJS += \
./light_sensor/isl76682.o 


# Each subdirectory must supply rules for building sources it contributes
light_sensor/%.o light_sensor/%.su: ../light_sensor/%.c light_sensor/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32H743xx -c -I../Core/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/ST/threadx/common/inc/ -I../Middlewares/ST/threadx/ports/cortex_m7/gnu/inc/ -I"C:/Users/GEN/STM32CubeIDE/workspace_1.10.1/Pin/light_sensor" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-light_sensor

clean-light_sensor:
	-$(RM) ./light_sensor/isl76682.d ./light_sensor/isl76682.o ./light_sensor/isl76682.su

.PHONY: clean-light_sensor

