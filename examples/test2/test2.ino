#include <kernelx.h>
#include <logger.h>
KernelX a;
void setup() {
  // put your setup code here, to run once:
  INIT_SERIAL_LOGGER;

}

void loop() {

  //getMemStruct();
  SERIAL_LOGGER(GET_HEX_PTR(&KernelX::getInstance()));
  SERIAL_LOGGER(GET_UINT_PTR(&KernelX::getInstance()));
  SERIAL_LOGGER("DDDDD");
  delay(1000);
}
