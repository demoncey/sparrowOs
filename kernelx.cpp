#include "kernelx.h"


void KernelX::checkIfworks(){
	SERIAL_LOGGER("works fine!!!!!");
}


void KernelX::showPointer(){
    SERIAL_LOGGERX(GET_HEX_PTR(&instance));
}

Kernel& Kernel::getInstance(){
  static KernelX instance;
  return instance;
}

Kernel::Kernel(){}






