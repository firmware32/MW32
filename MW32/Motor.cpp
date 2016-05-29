// 
// 
// 

#include "Motor.h"
#include <PWM32.h>
#include <Motor32.h>
#include "ConfigSettings.h"
#include "Types.h"

Motor::Motor(pwm32_pins_e pin, motor_position_e pos) : Motor32(pin)
{
	
	Pin = pin;
	Position = pos;
	Motor32::set(MOTOR_COMMAND_DEFAULT);
}
