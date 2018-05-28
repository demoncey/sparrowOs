#ifndef KERNELX_H_
#define KERNELX_H_
#include <Arduino.h>




#define SERIAL_LOGGERX(msg) (Serial)?Serial.println((msg)):0
#define GET_UINT_PTRX(ptr) (uint16_t)(ptr)
#define GET_HEX_PTRX(ptr) String((uint16_t)(ptr),HEX)

class KernelX
{
  private:
    //mem leak
    //static KernelX instance;
    
  public:
    KernelX();
    static KernelX &getInstance();
    KernelX(KernelX const&)= delete;
    void operator=(KernelX const&)  = delete;
    void showPointer();
	  void checkIfworks();
};
#endif /* KERNEL_H_ */
