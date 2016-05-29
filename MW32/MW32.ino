
//libraries

 
#include "platform.h"


uint32_t onRise;
uint32_t pulseWidth;
uint32_t ctt;
void pwmTime() { if (digitalRead(10)) onRise = micros(); else pulseWidth = micros() - onRise; ctt++; }


void setup()
{
	pinMode(10, INPUT_PULLUP); attachInterrupt(10, pwmTime, CHANGE);
	ufo.AirframeType = AIRFRAME_TYPE_QUADX;
	ufo.init();
 
	
	SER.begin(115200);
	while (!SER);		//Wait for serial to start

  /* add setup code here */

	//void test_init();


}

void loop()
{
	
	SER.println("shit");

	SER.print("\tPW ");    SER.print(pulseWidth); SER.print("\t");
	uint32_t cc = ctt;
	delay(1000);

	SER.print("\tFQ ");   SER.print(" "); SER.print((ctt - cc) >> 1); SER.println();

 
  /* add main program code here */

}
