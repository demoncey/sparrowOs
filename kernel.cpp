#include "kernel.h"



SpKernel::SpKernel(){};

void SpKernel::checkIfworks(){
	SERIAL_LOGGER("works fine!!!!!");
};

SpKernel* SpKernel::getInstance(){
  if(instance){
    instance=new SpKernel():
  }
  return instance;
};








