#include "BumperStrip.h"
const byte Bumper_Strip_Input = 2;
BumperStrip BS(Bumper_Strip_Input);
void setup() {
  Serial.begin(9600);
  BS.init();
}

void loop() {
  interrupts();
}
