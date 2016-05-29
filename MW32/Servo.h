// Servo.h

#ifndef _SERVO_h
#define _SERVO_h

#include "arduino.h"
#include "PWM32.h"

#include "Types.h"
#include "Servo32.h"
class Servo : Servo32 
{
 protected:


 public:

	 servo_type_e TypeOf;
	 pwm32_pins_e Pin;

	 Servo(pwm32_pins_e pin,servo_type_e typeo);
	
	void init();
};

 

#endif

