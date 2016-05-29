// Config.h

#ifndef _CONFIG_h
#define _CONFIG_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class ConfigMain
{
 protected:


 public:
	void init();
	void initMotors();
};

extern ConfigMain config;

#endif

