// using the German-DigiKeyboard library (https://github.com/Phoenixthrush/DigistumpArduinoDe)
#include <DigiKeyboardDe.h>

// the setup routine runs once
void setup() {  
  DigiKeyboard.update();
  
  // initialize the digital pin as an output.
  pinMode(0, OUTPUT); //LED on Model B
  pinMode(1, OUTPUT); //LED on Model A

  // opening run box
  DigiKeyboardDe.sendKeyStroke(KEY_R, MOD_GUI_LEFT);

  // opening powershell
  DigiKeyboard.delay(300);
  DigiKeyboardDe.println("powershell -noexit -c \"[console]::windowwidth=1; [console]::windowheight=1\"");

  // waiting for powershell window
  DigiKeyboard.delay(500);

  // downloading wallpaper
  DigiKeyboardDe.println("Invoke-WebRequest \"https://www.phoenixthrush.com/assets/images/random-images/chungus.jpg\" -OutFile \"wallpaper.jpg\"");

  // setting registry key for new wallpaper
  DigiKeyboardDe.println("reg add \"HKCU\\Control Panel\\Desktop\" /v WallPaper /d \"%userprofile%\\wallpaper.jpg\" /f");

  // refreshing wallpaper
  DigiKeyboardDe.println("RUNDLL32.EXE USER32.DLL, UpdatePerUserSystemParameters, 1, True; exit");
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(0, HIGH);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(1, HIGH);
  delay(100);             // wait for a second
  digitalWrite(0, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(1, LOW); 
  delay(100);             // wait for a second
}
