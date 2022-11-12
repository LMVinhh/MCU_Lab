################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/SEVEN_SEGMENT.c \
../Core/Src/button.c \
../Core/Src/fsm_automatic.c \
../Core/Src/global.c \
../Core/Src/ledStatus.c \
../Core/Src/main.c \
../Core/Src/process.c \
../Core/Src/scanLed.c \
../Core/Src/software_timer.c \
../Core/Src/stm32f1xx_hal_msp.c \
../Core/Src/stm32f1xx_it.c \
../Core/Src/syscalls.c \
../Core/Src/sysmem.c \
../Core/Src/system_stm32f1xx.c \
../Core/Src/traffic.c 

OBJS += \
./Core/Src/SEVEN_SEGMENT.o \
./Core/Src/button.o \
./Core/Src/fsm_automatic.o \
./Core/Src/global.o \
./Core/Src/ledStatus.o \
./Core/Src/main.o \
./Core/Src/process.o \
./Core/Src/scanLed.o \
./Core/Src/software_timer.o \
./Core/Src/stm32f1xx_hal_msp.o \
./Core/Src/stm32f1xx_it.o \
./Core/Src/syscalls.o \
./Core/Src/sysmem.o \
./Core/Src/system_stm32f1xx.o \
./Core/Src/traffic.o 

C_DEPS += \
./Core/Src/SEVEN_SEGMENT.d \
./Core/Src/button.d \
./Core/Src/fsm_automatic.d \
./Core/Src/global.d \
./Core/Src/ledStatus.d \
./Core/Src/main.d \
./Core/Src/process.d \
./Core/Src/scanLed.d \
./Core/Src/software_timer.d \
./Core/Src/stm32f1xx_hal_msp.d \
./Core/Src/stm32f1xx_it.d \
./Core/Src/syscalls.d \
./Core/Src/sysmem.d \
./Core/Src/system_stm32f1xx.d \
./Core/Src/traffic.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/%.o: ../Core/Src/%.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103x6 -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

