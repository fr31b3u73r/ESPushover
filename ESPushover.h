#include "ESPushoverMessage.h"
#include <WiFiClientSecure.h>
#include <ESP8266HTTPClient.h>

class ESPushover {
	private:
		String _token;
		String _user;
	public:
		ESPushover(String,String);
		int send(ESPushoverMessage);
};