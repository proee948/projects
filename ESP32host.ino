#include <WiFi.h>
#include <DNSServer.h>
#include <ESPAsyncWebServer.h>

// Wi-Fi Captive Portal postavke ssid(ime),sifra je opcionalna(prazno za bez sifre)
const char *ssid = "";
const char *password = "";

AsyncWebServer server(80);
DNSServer dnsServer;

// HTML 
const char* htmlContent = R"rawliteral(

</html>
<!-- ovdje ide web stranica inline css/js po potrebi--!>
</html>

)rawliteral";

void setup() {
  Serial.begin(115200);

  // Start WiFi AP
  WiFi.softAP(ssid, password);
  Serial.println("Access Point Started");
  Serial.print("AP IP Address: ");
  Serial.println(WiFi.softAPIP());

 
  // DNS Spoofing
  dnsServer.start(53, "*", WiFi.softAPIP());

  // Serviraj webstr
  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/html", htmlContent);
  });

  // Redirect sve ostalo
  server.onNotFound([](AsyncWebServerRequest *request) {
    request->redirect("/");  // redirect all non-matching requests to '/'
  });

  server.begin();
}

void loop() {
  dnsServer.processNextRequest();  // handling DNS spoofanja NDH ziv je ante umro nije
}

