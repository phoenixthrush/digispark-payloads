#include <DigiMouse.h>

void setup() {        
  DigiMouse.begin();
}

void loop() {
  DigiMouse.delay(3000);
  DigiMouse.moveX(10);
  DigiMouse.delay(50);
  DigiMouse.moveX(-10);
}
