// Motors.h

#ifndef _MOTOR_h
#define _MOTOR_h

	#include "arduino.h"
#include <PWM32.h>
#include <Motor32.h>
#include "Types.h"
class Motor : Motor32
{
 protected:


 public:
	 
	 Motor(pwm32_pins_e pin, motor_position_e pos);
	 motor_position_e Position;
	 pwm32_pins_e Pin;

};

 

#endif

