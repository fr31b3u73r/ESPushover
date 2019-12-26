#include "ESPushover.h"

ESPushover::ESPushover(String token, String user) {
	_token = token;
	_user = user;
}

int ESPushover::send(ESPushoverMessage espushovermessage) {
	WiFiClientSecure client;
	HTTPClient http;
	client.setInsecure();
	if (!client.connect("api.pushover.net", 443)) {
		return -1;
	}
	String postmessage = String("token=")+_token+"&user="+_user+"&title="+espushovermessage.getTitle()+"&message="+espushovermessage.getMessage()+"&device="+espushovermessage.getDevice()+"&url="+espushovermessage.getUrl()+"&url_title="+espushovermessage.getUrlTitle()+"&priority="+espushovermessage.getPriority()+"&retry="+espushovermessage.getRetry()+"&expire="+espushovermessage.getExpire()+"&sound="+espushovermessage.getSound();
	if (espushovermessage.getTimestamp() != 0) postmessage += String("&timestamp=")+espushovermessage.getTimestamp();
	if (espushovermessage.getIsHTML() == true) postmessage += String("&html=1");

	http.begin(client,"https://api.pushover.net/1/messages.json");
	int httpCode = http.POST(postmessage);
	return httpCode;
}