#include "kernel.h"



SpKernel::SpKernel(){};

void SpKernel::checkIfworks(){
	SERIAL_LOGGER("works fine!!!!!");
};

SpKernel* SpKernel::getInstance(){
  if(this.instance){
    this.instance=new SpKernel();
  }
  return instance;
};








