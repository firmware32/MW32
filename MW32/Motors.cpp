// 
// 
// 
#include "Aircraft.h"
#include "Types.h"
#include "Motors.h"

 

void Motors::init()
{
	free(_motors);
	if (ufo.AirframeType == AIRFRAME_TYPE_QUADX)
	{

		Count = 4;

		_motors = (Motor*)malloc(sizeof(Motor) * Count);
		_motors[0] = Motor(pwm32_pins_e::PWM32_PIN_D4_2, motor_position_e::MOTOR_POS_LEFT_FRONT);
		_motors[0] = Motor(pwm32_pins_e::PWM32_PIN_D5_2, motor_position_e::MOTOR_POS_RIGHT_FRONT);
		_motors[0] = Motor(pwm32_pins_e::PWM32_PIN_D6_2, motor_position_e::MOTOR_POS_LEFT_REAR);
		_motors[0] = Motor(pwm32_pins_e::PWM32_PIN_D7_2, motor_position_e::MOTOR_POS_RIGHT_FRONT);
	}

}




