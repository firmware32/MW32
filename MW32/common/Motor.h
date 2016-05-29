// Motors.h

#ifndef _MOTOR_h
#define _MOTOR_h
#include "./platform.h"
class Motor : public Motor32
{
protected:


public:

	Motor(pwm32_pins_e pin, motor_position_e pos);
	motor_position_e Position;
	pwm32_pins_e Pin;
	void init();
};



#endif

