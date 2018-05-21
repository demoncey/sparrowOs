

#include <kernel.h>

static int a;
class Test{
  int i=1;

  
};



void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  //Test *obj=new Test();
  extern int __heap_start, *__brkval; 
  SERIAL_LOGGER("------------------");
  SERIAL_LOGGER(GET_HEX_PTR(&a));
  SERIAL_LOGGER(GET_HEX_PTR(__brkval));
  SERIAL_LOGGER(GET_HEX_PTR(&__heap_start));
  
  SERIAL_LOGGER("------------------");
  //delete obj;
  // put your main code here, to run repeatedly:
  Kernel::getInstance()->checkIfworks();
  SERIAL_LOGGER("+++++++++++++++++++++++++++++");
  Kernel::getInstance()->showPointer();
  SERIAL_LOGGER("+++++++++++++++++++++++++++++");
  delay(1000);
}
