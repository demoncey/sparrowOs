#include "kernel.h"

SpKernel *instance=0;



void SpKernel::checkIfworks(){
	SERIAL_LOGGER("works fine!!!!!");
};

SpKernel* SpKernel::getInstance(){
  if(instance){
    instance=new SpKernel();
  }
  return instance;
};

SpKernel::SpKernel(){};






