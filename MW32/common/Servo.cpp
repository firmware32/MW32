// 
// 
// 
#include "./platform.h"
 


Servo::Servo(pwm32_pins_e pin, servo_type_e typeo) :Servo32((uint8_t)pin)
{
		Pin = pin;
		TypeOf = typeo;
		this->set(SERVO_COMMAND_DEFAULT);
	 
}

void Servo::init()
{


}


 

