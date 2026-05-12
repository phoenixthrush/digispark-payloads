#include <DigiMouse.h>

void setup()
{
    DigiMouse.begin(); // start or reenumerate USB
}

void loop()
{
    // haven't tested this
    DigiMouse.moveY(5); // down 5
    DigiMouse.delay(50);
    DigiMouse.moveY(-5);      // up 5
    DigiMouse.delay(180000L); // wait 3 minutes
}