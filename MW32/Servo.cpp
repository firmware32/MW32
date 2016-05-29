// 
// 
// 
#include "ConfigSettings.h"
#include "Servo.h"



Servo::Servo(pwm32_pins_e pin, servo_type_e typeo) :Servo32((uint8_t)pin)
{
		Pin = pin;
		TypeOf = typeo;
		Servo32::set(SERVO_COMMAND_DEFAULT);
}

void Servo::init()
{


}


 

