// Servos.h

#ifndef _SERVOS_h
#define _SERVOS_h

 
#include "arduino.h"
#include "PWM32.h"
#include <Motor32.h>
#include <Servo32.h>
#include "Servo.h"

class Servos
{
 protected:
	 Servo * _servos;
 public:
	 uint8_t Count;
	 
	void init();
};

 

#endif

