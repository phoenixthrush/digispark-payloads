// using the German-DigiKeyboard library (https://github.com/Phoenixthrush/DigistumpArduinoDe)
#include <DigiKeyboardDe.h>

// the setup routine runs once
void setup() {  
  DigiKeyboard.update();
  
  // initialize the digital pin as an output.
  pinMode(0, OUTPUT); //LED on Model B
  pinMode(1, OUTPUT); //LED on Model A

  // opening the rickroll on youtube
  DigiKeyboardDe.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboardDe.println("https://youtu.be/dQw4w9WgXcQ?t=43s");

  // delay for browser start
  DigiKeyboard.delay(6500);

  // accepting the youtube agreement (7 tabs and 1 enter)
  for(int i = 0; i < 7; i++) {
  DigiKeyboardDe.sendKeyStroke(10); // tab
  DigiKeyboard.delay(25);
  } 
  
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);

  // entering fullscreen mode
  // DigiKeyboardDe.sendKeyStroke(KEY_F11);
  DigiKeyboardDe.sendKeyStroke(KEY_F);
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
