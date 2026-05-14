// #define LAYOUT_GERMAN
#include "DigiKeyboard.h"

void setup()
{
    DigiKeyboard.sendKeyStroke(0);

    while (true)
    {
        DigiKeyboard.sendKeyStroke(KEY_SPACE);
    }
}

void loop()
{
    // empty
}