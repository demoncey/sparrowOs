#include "kernelx.h"
#include "logger.h"


void KernelX::checkIfworks(){
	SERIAL_LOGGER("works fine!!!!!");
}


void KernelX::showPointer(){
    SERIAL_LOGGER(GET_HEX_PTR(this));
}

Kernel& Kernel::getInstance(){
  static KernelX instance;
  return instance;
}

Kernel::Kernel(){}






