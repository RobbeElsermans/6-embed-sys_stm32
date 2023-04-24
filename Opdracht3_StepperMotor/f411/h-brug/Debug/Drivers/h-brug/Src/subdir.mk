################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/h-brug/Src/h_brug.c 

OBJS += \
./Drivers/h-brug/Src/h_brug.o 

C_DEPS += \
./Drivers/h-brug/Src/h_brug.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/h-brug/Src/%.o Drivers/h-brug/Src/%.su: ../Drivers/h-brug/Src/%.c Drivers/h-brug/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"/home/robbe/github/6-embed-sys_stm32/Opdracht3_StepperMotor/f411/h-brug/Drivers/h-brug" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-h-2d-brug-2f-Src

clean-Drivers-2f-h-2d-brug-2f-Src:
	-$(RM) ./Drivers/h-brug/Src/h_brug.d ./Drivers/h-brug/Src/h_brug.o ./Drivers/h-brug/Src/h_brug.su

.PHONY: clean-Drivers-2f-h-2d-brug-2f-Src

