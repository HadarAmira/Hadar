################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../CommandManager.cpp \
../Executer.cpp \
../JoinGame.cpp \
../Server.cpp \
../StartGame.cpp \
../main.cpp 

OBJS += \
./CommandManager.o \
./Executer.o \
./JoinGame.o \
./Server.o \
./StartGame.o \
./main.o 

CPP_DEPS += \
./CommandManager.d \
./Executer.d \
./JoinGame.d \
./Server.d \
./StartGame.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


