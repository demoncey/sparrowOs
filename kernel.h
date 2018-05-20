#ifndef KERNEL_H_
#define KERNEL_H_
#include <Arduino.h>




#define SERIAL_LOGGER1(msg) (Serial)?Serial.println((msg)):0
#define GET_HEX_PTR(ptr) (uint16_t)(ptr)



class SparrowKernel
{
  public:
    SparrowKernel();
	void checkIfworks():
};
#endif /* KERNEL_H_ */
