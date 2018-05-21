#include "kernel.h"

Kernel *Kernel::instance=0;

void Kernel::checkIfworks(){
	SERIAL_LOGGER("works fine!!!!!");
}


void Kernel::showPointer(){
  if(instance){
    SERIAL_LOGGER(GET_HEX_PTR(instance));
    SERIAL_LOGGER(GET_HEX_PTR(&instance));
  }else{
    SERIAL_LOGGER("instance empty");
  }
}

Kernel* Kernel::getInstance(){
  if(!instance){
    instance=new Kernel();
  }
  return instance;
}

Kernel::Kernel(){}






