#include <DigiKeyboard.h>

void setup() {        
  DigiKeyboard.update();

  /*
  DigiKeyboard.sendKeyStroke(KEY_X, MOD_GUI_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_A);
  DigiKeyboard.delay(250);
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
  */

  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.println("cmd /c start /min "" powershell -NoP -Win H -Noni -Exec Bypass; Start-Sleep -Seconds 5; notepad.exe");
}

void loop() {;;}
