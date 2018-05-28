#include <kernelx.h>

KernelX a;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  SERIAL_LOGGERX(GET_HEX_PTRX(&KernelX::getInstance()));
  SERIAL_LOGGERX("DDDDD");
  delay(1000);
}
