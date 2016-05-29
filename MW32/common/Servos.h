// Servos.h

#ifndef _SERVOS_h
#define _SERVOS_h

 
#include "./platform.h"
 
class Servos
{
 protected:

 public:
	 uint8_t Count;
	 
	void init();
	void SetAll(uint16_t v);
};

 

#endif

