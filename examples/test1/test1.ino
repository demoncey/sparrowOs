#include <kernel.h>


void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  SpKernel::getInstance()->checkIfworks();
  delay(1000);
}
