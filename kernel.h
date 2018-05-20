#ifndef KERNEL_H_
#define KERNEL_H_
#include <Arduino.h>




#define SERIAL_LOGGER(msg) (Serial)?Serial.println((msg)):0
#define GET_HEX_PTR(ptr) (uint16_t)(ptr)



class SpKernel
{
  public:
    SpKernel();
	  void checkIfworks();
};
#endif /* KERNEL_H_ */
