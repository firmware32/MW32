// Aircraft.h

#ifndef _AIRCRAFT_h
#define _AIRCRAFT_h
#include "./platform.h"

class AirCraft
{
 protected:
	 bool pwmHasBeenInit;

 public:
	 AirCraft();
	 airframe_type_e AirframeType = airframe_type_e::AIRFRAME_TYPE_NOT_SET;

	 Motors motors;
	 Servos servos;
	void init();
};

extern AirCraft ufo;

#endif

