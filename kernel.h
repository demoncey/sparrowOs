#ifndef KERNEL_H_
#define KERNEL_H_
#include <Arduino.h>




#define SERIAL_LOGGER(msg) (Serial)?Serial.println((msg)):0
#define GET_HEX_PTR(ptr) (uint16_t)(ptr)


class Kernel
{
  private:
    static Kernel *instance;
    Kernel();
  public:
    static Kernel *getInstance();
	  void checkIfworks();
};
#endif /* KERNEL_H_ */
