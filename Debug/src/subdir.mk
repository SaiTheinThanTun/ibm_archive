################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Age.cpp \
../src/Human.cpp \
../src/Infection.cpp \
../src/Location.cpp \
../src/Occupation.cpp \
../src/Patch.cpp \
../src/ibm_001.cpp 

OBJS += \
./src/Age.o \
./src/Human.o \
./src/Infection.o \
./src/Location.o \
./src/Occupation.o \
./src/Patch.o \
./src/ibm_001.o 

CPP_DEPS += \
./src/Age.d \
./src/Human.d \
./src/Infection.d \
./src/Location.d \
./src/Occupation.d \
./src/Patch.d \
./src/ibm_001.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


