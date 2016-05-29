// Motors.h

#ifndef _MOTORS_h
#define _MOTORS_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

#include "Types.h"
#include "ConfigSettings.h"
#include "ConfigMain.h"
#include "PWM32.h"
#include "Servo.h"


#include "PWM32.h"
#include <Motor32.h>
#include <Servo32.h>
#include "Motor.h"
class Motors
{
 protected:
	 uint8_t Count;
	 Motor * _motors;

 public:
	void init();
};

 

#endif

