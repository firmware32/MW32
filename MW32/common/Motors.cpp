// 
// 
// 
#include "./platform.h"

Motor _m[MOTOR_COUNT] ={ MOTORS};
 
void Motors::init()
{
	SetAll(MOTOR_COMMAND_DEFAULT);
	
}

void Motors::SetAll(uint16_t v)
{
	v = constrain(v, 900, 2200);
	for (uint8_t i = 0; i < MOTOR_COUNT; i++)
	{
		_m[i].set(v);
	}
}




