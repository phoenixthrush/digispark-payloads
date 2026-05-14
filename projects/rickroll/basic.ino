// #define LAYOUT_GERMAN
#include "DigiKeyboard.h"

void setup()
{
    pinMode(1, OUTPUT);
    DigiKeyboard.sendKeyStroke(0);

    // open run box
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(250);

    // open rickroll
    DigiKeyboard.println("https://rickroll.it/");

    // fullscreen
    DigiKeyboard.delay(750);
    DigiKeyboard.sendKeyStroke(KEY_F11);
}

void loop()
{
    digitalWrite(1, HIGH);
    delay(100);
    digitalWrite(1, LOW);
    delay(100);
}