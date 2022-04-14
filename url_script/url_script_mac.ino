//This DigiSpark script opens up Rick Astley's - Never Gonna Give You Up and also a fake Windows update screen and then maximizes it using F11
#include "DigiKeyboard.h"
void setup() {
  //empty
}
void loop() {
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("terminal");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("open \"https://youtu.be/dQw4w9WgXcQ?t=43\"");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("https://fakeupdate.net/apple/");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_F, MOD_CONTROL_LEFT | MOD_GUI_LEFT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_F12);
  DigiKeyboard.sendKeyStroke(KEY_F12);
  DigiKeyboard.sendKeyStroke(KEY_F12);
  DigiKeyboard.sendKeyStroke(KEY_F12);
  DigiKeyboard.sendKeyStroke(KEY_F12);
  DigiKeyboard.sendKeyStroke(KEY_F12);
  DigiKeyboard.sendKeyStroke(KEY_F12);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_F11);
  DigiKeyboard.sendKeyStroke(KEY_F11);
  DigiKeyboard.sendKeyStroke(KEY_F11);
  DigiKeyboard.sendKeyStroke(KEY_F11);
  DigiKeyboard.sendKeyStroke(KEY_F11);
  DigiKeyboard.sendKeyStroke(KEY_F11);
  DigiKeyboard.delay(2000);
  for(;;){
   }
}
