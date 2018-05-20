#include <kernel.h>

SparrowKernel kernel;
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  kernel.checkIfworks();
  delay(1000);
}
