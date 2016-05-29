
#include "./platform.h"

// Motors are not active just assigned
Motor::Motor(pwm32_pins_e pin, motor_position_e pos) : Motor32(pin)
{
	
	Pin = pin;
	Position = pos;
 Motor32::set(MOTOR_COMMAND_DEFAULT);
}

void Motor::init()
{ 
	  
}
