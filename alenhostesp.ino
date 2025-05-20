#include <WiFi.h>
#include <DNSServer.h>
#include <ESPAsyncWebServer.h>

// Wi-Fi Captive Portal postavke ssid(ime),sifra je opcionalna(prazno za bez sifre)
const char *ssid = "ALENFANPAGE";
const char *password = "";



AsyncWebServer server(80);
DNSServer dnsServer;

// HTML 
const char* htmlContent = R"rawliteral(
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>L YUTA Mahito Near suguru geto mello johan monster </title>
    <font color="#e534eb">
        <h1 align="center">
           ALAN STOJIC FANPAGE
        </h1>
    </font>
    <script>
        var currentAudio = null;
        function playAudio(audioId) {
            var audio = document.getElementById(audioId);
            if (currentAudio && currentAudio !== audio) {
                currentAudio.pause();
                currentAudio.currentTime = 0;
            }
            audio.play();
            currentAudio = audio;
        }
    </script>
    <style>
        img { animation: fadeIn 8s ease-in-out; }
        @keyframes fadeIn { 0% { opacity: 0; } 100% { opacity: 1; } }
        table tr:hover { transform: scale(1.05); }
        select:hover { background-color: #f3f3f3; }
        iframe { transform: translateX(100%); animation: slideIn 1s forwards; }
        @keyframes slideIn { 100% { transform: translateX(0); } }
    </style>
</head>
<body>
    <div style="text-align: center; margin-top: 20px;">
       <img src="gojo.jpg" alt="nah...id win"> 
    </div>
    <video autoplay loop muted playsinline style="position: fixed; top: 0; left: 0; width: 100%; height: 100%; object-fit: cover; z-index: -1;">
        <source src="alen.mp4" type="video/mp4">
        Your browser does not support the video tag.
    </video>
    <table style="width: 15%; border: 6px solid #05060a; background-color: #f3f3f3; text-align: left;">
        <tbody>
            <tr><td style="color: #e534eb; padding: 6px;">DOBRODOSLI U YUTIN FANPAGE</td></tr>
        </tbody>
    </table>
    <select>																	
        <option value="mogli smo">mogli smo</option>
        <option value="moram u mostar">moram u mostar</option>
        <option value="berem sipke">berem sipke</option>
        <option value="copy/paste">copy/paste</option>
        <option value="reinforcement behavior">reinforcement behavior</option>
        <option value="always against me">always against me</option>
    </select>
    <table style="width: 25%; border: 6px solid #05060a; background-color: #f3f3f3; text-align: left;">
        <tbody>
            <tr>
                <td style="color: #a11d5f; padding: 4px;">
                    <h5>ALEN STOJIC IS A TALENTED RAGEBAITER KNOWN FOR HIS CAPTIVATING AND ASTONISHING RAGEBAIT</h5>
                    <p>TOP ALEN STOJIC RAGEBAITS TO LISTEN TO</p>
                    <ul>
                        <li><strong>FADED</strong> <button onclick="playAudio('faded')">RAGE</button></li>
                        <li><strong>Rihanna - DIAMONDS</strong> <button onclick="playAudio('diamonds')">BAIT</button></li>
                        <li><strong>SPECTRE</strong> <button onclick="playAudio('spectre')">RAGE</button></li>
                        <li><strong>STEREO LOVE</strong> <button onclick="playAudio('stereo_love')">BAIT</button></li>
                        <li><strong>HALL OF FAME</strong> <button onclick="playAudio('hall_of_fame')">MOGLI SMO</button></li>
                    </ul>
                    <audio id="faded" src="https://www.youtube.com/watch?v=60ItHLz5WEA" preload="auto"></audio>
                    <audio id="diamonds" src="https://www.youtube.com/watch?v=lWA2pjMjpMw" preload="auto"></audio>
                    <audio id="spectre" src="https://www.youtube.com/watch?v=AOeY-nDp7hI" preload="auto"></audio>
                    <audio id="stereo_love" src="https://soundcloud.com/toma-barbaric/stereo?si=067bf3a09011462e80978ba8dbcb2cb5&utm_source=clipboard&utm_medium=text&utm_campaign=social_sharing" preload="auto"></audio>
                    <audio id="hall_of_fame" src="https://www.youtube.com/watch?v=mk48xRzuNvA" preload="auto"></audio>


                          <iframe width="100%" height="300" scrolling="no" frameborder="no" allow="autoplay" src="https://w.soundcloud.com/player/?url=https%3A//api.soundcloud.com/tracks/2065071756&color=%23ff5500&auto_play=false&hide_related=false&show_comments=true&show_user=true&show_reposts=false&show_teaser=true&visual=true"></iframe><div style="font-size: 10px; color: #cccccc;line-break: anywhere;word-break: normal;overflow: hidden;white-space: nowrap;text-overflow: ellipsis; font-family: Interstate,Lucida Grande,Lucida Sans Unicode,Lucida Sans,Garuda,Verdana,Tahoma,sans-serif;font-weight: 100;"><a href="https://soundcloud.com/toma-barbaric" title="Toma Barbaric" target="_blank" style="color: #cccccc; text-decoration: none;">Toma Barbaric</a> · <a href="https://soundcloud.com/toma-barbaric/stereo" title="stereo" target="_blank" style="color: #cccccc; text-decoration: none;">stereo</a></div>

                            <iframe width="560" height="315" src="https://www.youtube.com/embed/lWA2pjMjpBs?si=YQ0FbjsZiJYgw2i7" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>
                </td>
            </tr>
        </tbody>
    </table>
    <div style="display: flex; flex-wrap: wrap; gap: 10px; justify-content: center; margin-top: 40px;">
        <img src="https://drive.google.com/uc?export=view&id=1GDdqfZ-2EhF0jHxsn_him-buw5lteR1q" alt="Image 1" style="width: 200px;">
        <img src="slika3.jpg" alt="Image 2" style="width: 200px;">
        <img src="slika4.jpg" alt="Image 3" style="width: 200px;">
        <img src="slika5.jpg" alt="Image 4" style="width: 200px;">
    </div>
</body>
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

