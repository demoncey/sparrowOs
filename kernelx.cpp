#include "kernel.h"


void KernelX::checkIfworks(){
	SERIAL_LOGGER("works fine!!!!!");
}


void KernelX::showPointer(){
    SERIAL_LOGGERX(GET_HEX_PTR(&instance));
}

Kernel& Kernel::getInstance(){
  return instance;
}

Kernel::Kernel(){}






