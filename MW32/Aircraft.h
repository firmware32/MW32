// Aircraft.h
#include "Platform.h"
#ifndef _AIRCRAFT_h
#define _AIRCRAFT_h

#include "PWM32.h"
#include <Motor32.h>
#include <Servo32.h>
#include "Types.h"
#include "ConfigSettings.h"
#include "ConfigMain.h"

#include "Servo.h"
#include "Motor.h"
#include "Motors.h"


class AirCraft
{
 protected:
	 bool pwmHasBeenInit;

 public:
	 airframe_type_e AirframeType = airframe_type_e::AIRFRAME_TYPE_NOT_SET;
	 Motors motors;
	void init();
};

extern AirCraft ufo;

#endif

