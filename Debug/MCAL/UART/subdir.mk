################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/UART/UART_Prog.c 

OBJS += \
./MCAL/UART/UART_Prog.o 

C_DEPS += \
./MCAL/UART/UART_Prog.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/UART/%.o: ../MCAL/UART/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"D:\SDK\ExtMC" -I"D:\SDK\ExtMC\MCAL\DIO" -I"D:\SDK\ExtMC\MCAL\Timer" -I"D:\SDK\ExtMC\App" -I"D:\SDK\ExtMC\MCAL" -I"D:\SDK\ExtMC\MCAL\UART" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


