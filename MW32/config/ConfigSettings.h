// ConfigSettings.h

#ifndef _CONFIGSETTINGS_h
#define _CONFIGSETTINGS_h

#include "./platform.h"
#define TARGET_PROTO_BOARD 1

#define TARGET  TARGET_PROTO_BOARD

#if  TARGET == TARGET_PROTO_BOARD
#define TARGET_NAME proto_board
#include "./target/proto_board/target.h"
#endif
#define QUADX

// DEFAULTS
#define MOTOR_COMMAND_DEFAULT 1000
#define SERVO_COMMAND_DEFAULT 1500
//airframe_type_e type;
//uint8_t MortorPinCount;
//uint8_t MotorPins[MOTOR_COUNT];
//motor_position_e MotorPosition[MOTOR_COUNT];
//uint8_t ServoCount;
//uint8_t ServoPinCount;
//uint8_t ServoPins[MOTOR_COUNT];
//servo_type_e ServoType[MOTOR_COUNT];



#endif

