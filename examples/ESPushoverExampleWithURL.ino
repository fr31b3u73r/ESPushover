#include <ESP8266WiFi.h>
#include "ESPushover.h"

void setup() {
	Serial.begin(115200);
	WiFi.begin("SSID", "PASSWORD");
	while (WiFi.status() != WL_CONNECTED) delay(50);
	Serial.println("Connected");
	
	ESPushover po = ESPushover("SecureAppToken","UserToken");
	ESPushoverMessage pom = ESPushoverMessage("test");
	pom.setUrl("https://github.com");
	Serial.println(po.send(pom)); //should return 200 on success
}

void loop() {
}