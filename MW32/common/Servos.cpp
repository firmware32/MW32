// 
// 
// 

 
#include "./platform.h"
Servo _s[SERVO_COUNT] = { SERVOS };
void Servos::init()
{
	SetAll(SERVO_COMMAND_DEFAULT);

}
void Servos::SetAll(uint16_t v)
{
	v = constrain(v, 900, 2200);
	for (uint8_t i = 0; i < SERVO_COUNT; i++)
	{
		_s[i].set(v);
	}
}