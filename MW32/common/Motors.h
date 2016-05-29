// Motors.h

#ifndef _MOTORS_h
#define _MOTORS_h
 
#include "./platform.h"

class Motors
{
 protected:
	 uint8_t Count;
	 Motor * _motors;

 public:
	void init();
	void SetAll(uint16_t v);
};

 

#endif

