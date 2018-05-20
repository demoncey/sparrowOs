#include "kernel.h"

Kernel *Kernel::instance=0;

void Kernel::checkIfworks(){
	SERIAL_LOGGER("works fine!!!!!");
}

Kernel* Kernel::getInstance(){
  if(instance){
    instance=new Kernel();
  }
  return instance;
}

Kernel::Kernel(){}






