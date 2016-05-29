// proto_board.h

#ifndef _PROTO_BOARD_h
#define _PROTO_BOARD_h
 
#define MOTOR_COUNT 4
#define SERVO_COUNT 2

 
 
#define MOTORS Motor(pwm32_pins_e::PWM32_PIN_D2_2, motor_position_e::MOTOR_POS_LEFT_FRONT), \
Motor(pwm32_pins_e::PWM32_PIN_D5_2, motor_position_e::MOTOR_POS_RIGHT_REAR), \
Motor(pwm32_pins_e::PWM32_PIN_D6_2, motor_position_e::MOTOR_POS_LEFT_REAR),  \
Motor(pwm32_pins_e::PWM32_PIN_D7_2, motor_position_e::MOTOR_POS_RIGHT_FRONT) 

 
#define SERVOS Servo(  pwm32_pins_e::PWM32_PIN_D3_1, servo_type_e::SERVO_TYPE_ROLL), \
Servo(pwm32_pins_e::PWM32_PIN_D4_1, servo_type_e::SERVO_TYPE_PITCH) 

//Servo(pwm32_pins_e::PWM32_PIN_D11_3, servo_type_e::SERVO_TYPE_NOT_SET),  \
//Servo(pwm32_pins_e::PWM32_PIN_D13_3, servo_type_e::SERVO_TYPE_NOT_SET)  \

 
 


#endif

