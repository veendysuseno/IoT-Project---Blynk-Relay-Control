/* Program IoT Project BLYNK - Kontrol Relay 4 Channel */

#define BLYNK_PRINT Serial
#include &amp;lt;ESP8266WiFi.h&amp;gt;
#include &amp;lt;BlynkSimpleEsp8266.h&amp;gt;

char auth[] = "XXXX";           // masukkan kode autentikasi disini
char ssid[] = "Veendy-Suseno";  //nama wifi
char pass[] = "Admin12345";     //password

void setup() { //Pengaturan Variabel
    Serial.begin(9600);
    Blynk.begin(auth, ssid, pass);
}

void loop() {
    Blynk.run();
}
