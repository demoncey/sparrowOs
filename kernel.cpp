#include "kernel.h"



SpKernel::SpKernel(){};

void SpKernel::checkIfworks(){
	SERIAL_LOGGER("works fine!!!!!");
};


SpKernel* SpKernel::checkIfworks(){
  if(instance){
    instance=new SpKernel():
  }
  return instance;
};








