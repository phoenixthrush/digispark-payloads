// this payload is completely untested

#include <DigiMouse.h>

void setup()
{
    pinMode(1, OUTPUT);
    DigiMouse.begin(); // start or reenumerate USB
}

void loop()
{
    // jiggle every 3 minutes
    // LED blinks every 5 seconds
    for (int i = 0; i < 18; i++)
    {
        digitalWrite(1, HIGH);
        delay(5000);

        digitalWrite(1, LOW);
        delay(5000);
    }

    DigiMouse.moveY(5);
    DigiMouse.delay(50);
    DigiMouse.moveY(-5);
}