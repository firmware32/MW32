// 
// 
// 

#include "./platform.h"


//airframe_config_t airFrameConfigs[1]{
//	{ airframe_type_e::AIRFRAME_TYPE_QUADX ,4
//	,{ 0,3,4,5,99,99,99,99 },
//	{ MOTOR_POS_LEFT_FRONT, MOTOR_POS_LEFT_REAR,MOTOR_POS_RIGHT_FRONT,MOTOR_POS_RIGHT_REAR,MOTOR_NOT_SET ,MOTOR_NOT_SET ,MOTOR_NOT_SET ,MOTOR_NOT_SET },
//	4,
//	{ 1,2,6,7,99,99,99,99 },
//	{ SERVO_TYPE_ROLL, SERVO_TYPE_PITCH,SERVO_TYPE_MISC,SERVO_TYPE_MISC,SERVO_TYPE_NOT_SET ,SERVO_TYPE_NOT_SET ,SERVO_TYPE_NOT_SET ,SERVO_TYPE_NOT_SET },
//
//
//	}
//};

AirCraft::AirCraft()
{
}

void AirCraft::init()
{

	 pwm32_init();
	 motors.init();
	 servos.init();
 
 
}





AirCraft ufo;
