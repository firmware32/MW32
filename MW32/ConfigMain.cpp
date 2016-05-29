// 
// 
// 


#include "Aircraft.h"
#include "Types.h"
#include "ConfigSettings.h"
#include "ConfigMain.h"
#include "PWM32.h"
#include "Motor.h"
#include "Servo.h"



void ConfigMain::init()
{
	//ufo.AirframeType = airframe_type_e::AIRFRAME_TYPE_QUADX;

	pwm32_init();

}

void ConfigMain::initMotors()
{

	//free(ufo.Motors);
	//if (ufo.AirframeType == AIRFRAME_TYPE_QUADX)
	//{

	//	ufo.MotorCount = 4;

	//	ufo.Motors = (Motor*)malloc(sizeof(Motor) * ufo.MotorCount);
	//	ufo.Motors[0] = Motor(pwm32_pins_e::PWM32_PIN_D4_2, motor_position_e::MOTOR_POS_LEFT_FRONT);
	//	ufo.Motors[0] = Motor(pwm32_pins_e::PWM32_PIN_D5_2, motor_position_e::MOTOR_POS_RIGHT_FRONT);
	//	ufo.Motors[0] = Motor(pwm32_pins_e::PWM32_PIN_D6_2, motor_position_e::MOTOR_POS_LEFT_REAR);
	//	ufo.Motors[0] = Motor(pwm32_pins_e::PWM32_PIN_D7_2, motor_position_e::MOTOR_POS_RIGHT_FRONT);
	//}
}


ConfigMain config;