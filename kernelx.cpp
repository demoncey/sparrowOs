#include "kernelx.h"


void KernelX::checkIfworks(){
	SERIAL_LOGGERX("works fine!!!!!");
}


void KernelX::showPointer(){
    SERIAL_LOGGERX(GET_HEX_PTRX(&instance));
}

Kernel& Kernel::getInstance(){
  static KernelX instance;
  return instance;
}

Kernel::Kernel(){}






