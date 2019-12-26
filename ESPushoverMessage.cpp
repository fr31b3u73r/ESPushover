#include "ESPushoverMessage.h"

ESPushoverMessage::ESPushoverMessage(String message) {
	_message = message;
}

void ESPushoverMessage::setDevice(String device) {
	_device = device;
}

void ESPushoverMessage::setTitle(String title) {
	_title = title;
}

void ESPushoverMessage::setUrl(String url) {
	_url = url;
}

void ESPushoverMessage::setUrlTitle(String url_title) {
	_url_title = url_title;
}

void ESPushoverMessage::setPriority(Pushoverpriorities priority) {
	_priority = priority;
}

void ESPushoverMessage::setRetry(uint16_t retry) {
	_retry = retry;
}

void ESPushoverMessage::setExpire(uint16_t expire) {
	_expire = expire;
}

void ESPushoverMessage::setTimestamp(uint32_t timestamp) {
	_timestamp = timestamp;
}

void ESPushoverMessage::setIsHTML(boolean ishtml) {
	_ishtml = ishtml;
}

void ESPushoverMessage::setSound(Pushoversounds sound) {
	_sound = sound;
}

String ESPushoverMessage::getMessage() {
	return _message;
}

String ESPushoverMessage::getDevice() {
	return _device;
}

String ESPushoverMessage::getTitle() {
	return _title;
}

String ESPushoverMessage::getUrl() {
	return _url;
}

String ESPushoverMessage::getUrlTitle() {
	return _url_title;
}

int8_t ESPushoverMessage::getPriority() {
	int8_t priorities[5] = { 0, -2, -1, 1, 2 };
	return priorities[_priority];
}

uint16_t ESPushoverMessage::getRetry() {
	return _retry;
}

uint16_t ESPushoverMessage::getExpire() {
	return _expire;
}

uint32_t ESPushoverMessage::getTimestamp() {
	return _timestamp;
}

boolean ESPushoverMessage::getIsHTML() {
	return _ishtml;
}

String ESPushoverMessage::getSound() {
	String sounds[22] = { "pushover", "bike", "bugle", "cashregister", "classical", "cosmic", "falling", "gamelan", "incoming", "intermission", "magic", "mechanical", "pianobar", "siren", "spacealarm", "tugboat", "alien", "climb", "peristent", "echo", "updown", "none" };
	return sounds[_sound];
}