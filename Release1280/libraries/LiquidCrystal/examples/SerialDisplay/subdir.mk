################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
INO_SRCS += \
../libraries/LiquidCrystal/examples/SerialDisplay/SerialDisplay.ino 

OBJS += \
./libraries/LiquidCrystal/examples/SerialDisplay/SerialDisplay.o 

INO_DEPS += \
./libraries/LiquidCrystal/examples/SerialDisplay/SerialDisplay.d 


# Each subdirectory must supply rules for building sources it contributes
libraries/LiquidCrystal/examples/SerialDisplay/%.o: ../libraries/LiquidCrystal/examples/SerialDisplay/%.ino
	@echo 'Building file: $<'
	@echo 'Invoking: AVR C++ Compiler'
	avr-g++ -I"/home/robert/gitrep/Arduino_Mega_ATmega1280/arduino" -I"/home/robert/gitrep/freeboardPLC/libraries/PString" -I"/home/robert/gitrep/freeboardPLC/libraries/SPI" -I"/home/robert/gitrep/freeboardPLC/libraries/AverageList" -I"/home/robert/gitrep/freeboardPLC/libraries/PID_v1" -I"/home/robert/gitrep/freeboardPLC/libraries/FlexiTimer2" -I"/home/robert/gitrep/freeboardPLC/libraries/EEPROM" -I"/home/robert/gitrep/freeboardPLC/libraries/NMEA" -I"/home/robert/gitrep/freeboardPLC/libraries/AltSoftSerial" -I"/home/robert/gitrep/freeboardPLC/libraries" -D__IN_ECLIPSE__=1 -DARDUINO=100 -Wall -g2 -gstabs -Os -ffunction-sections -fdata-sections -fno-exceptions -g -mmcu=atmega1280 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o "$@" -x c++ "$<"
	@echo 'Finished building: $<'
	@echo ' '


