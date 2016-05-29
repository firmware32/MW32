// Types.h

#ifndef _TYPES_h
#define _TYPES_h

#include "./platform.h"

/**************************************************************************************/
/***************      Multitype decleration for the GUI's          ********************/
/**************************************************************************************/
enum airframe_type_e
{
	AIRFRAME_TYPE_NOT_SET = 0,
	AIRFRAME_TYPE_TRI = 1,
	AIRFRAME_TYPE_QUADP = 2,
	AIRFRAME_TYPE_QUADX = 3,
	AIRFRAME_TYPE_BI = 4,
	AIRFRAME_TYPE_GIMBAL = 5,
	AIRFRAME_TYPE_Y6 = 6,
	AIRFRAME_TYPE_HEX6 = 7,
	AIRFRAME_TYPE_FLYING_WING = 8,
	AIRFRAME_TYPE_Y4 = 9,
	AIRFRAME_TYPE_HEX6X = 10,
	AIRFRAME_TYPE_OCTOX8 = 11,
	AIRFRAME_TYPE_AIRPLANE = 14
};

enum motor_position_e {
	MOTOR_POS_LEFT_FRONT = 0,
	MOTOR_POS_RIGHT_FRONT= 1,
	MOTOR_POS_LEFT_REAR = 2,
	MOTOR_POS_RIGHT_REAR = 3,
	MOTOR_POS_LEFT_MID_F = 4,
	MOTOR_POS_RIGHT_MID_F = 5,
	MOTOR_POS_LEFT_MID_R =6,
	MOTOR_POS_RIGHT_MID_R=7,
	MOTOR_NOT_SET = 99
};
enum servo_type_e {
	SERVO_TYPE_ROLL = 0,
	SERVO_TYPE_PITCH = 1,
	SERVO_TYPE_TAIL = 2,
	SERVO_TYPE_MISC = 3 ,
	SERVO_TYPE_LEFT_AIL =4,
	SERVO_TYPE_RIGHT_AIL=5,
	SERVO_TYPE_RUDDER = 6,
	SERVO_TYPE_ELEV = 7,
	SERVO_TYPE_NOT_SET = 99
};

typedef struct {
	airframe_type_e type;
	uint8_t MortorPinCount;
	uint8_t MotorPins[MOTOR_COUNT];
	motor_position_e MotorPosition[MOTOR_COUNT];
	uint8_t ServoPinCount;
	uint8_t ServoPins[MOTOR_COUNT];
	servo_type_e ServoType[MOTOR_COUNT];
} airframe_config_t;
#endif

