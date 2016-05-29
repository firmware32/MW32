// test.h

#ifndef _TEST_h
#define _TEST_h

#include "./platform.h"
#define TEST_OFF 0
#define TEST_MOTORS 1
#define TEST TEST_MOTORS
#define SER SerialUSB
 
void test_init();
void test_run();



#endif

