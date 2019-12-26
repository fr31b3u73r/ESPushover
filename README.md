# ESPushover
[![Donate](https://img.shields.io/badge/donate-PayPal-brightgreen.svg)](https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=5654A67GA3GHA)

**Important information: This library is an inofficial library not written or supported by Pushover! If their API changes the library needs to be adjusted.**

*This library allows you to send push messages via Pushover to your devices from a ESP8266. It is designed to work with the Arduino IDE (tested on 1.8.10).*

## Setup
Download (via git clone or by downloading the zip from GitHub) the library and install it as [described on the Arduino Website](https://www.arduino.cc/en/Guide/Libraries).

## Usage
*Please check the samples in the examples folder.*

**Basic usage:**
Initialize ESPushover: `ESPushover po = ESPushover("SecureAppToken","UserToken");`
Initialize ESPushoverMessage: `ESPushoverMessage pom = ESPushoverMessage("test");`
Send Message (will return HTTP status code): `po.send(pom);`

**Setters for messages:**
```
setDevice(String); // only sends pushes to given devices if set
setTitle(String); // sets the titles of the message
setUrl(String); // sets a clickable URL to the push message
setUrlTitle(String); // title of the URL
setPriority(Pushoverpriorities); // sets the priority of the message (see possible values below)
setRetry(uint16_t); // retry in seconds
setExpire(uint16_t); // timeout for message in seconds
setTimestamp(uint32_t); // unix timestamp, if not set, it will be the time the message was received
setIsHTML(boolean); // define that the message is HTML formatted
setSound(Pushoversounds); // sets a custom sound (see possible values below)
```
Pushoverpriorities (see [Pushover API documentation](https://pushover.net/api#priority) for details):
PRIORITY_NORMAL (default)
PRIORITY_NONOTIFICATION
PRIORITY_QUIET
PRIORITY_HIGH
PRIORITY_CONFIRMATION

Pushoversounds (see [Pushover API documentation(https://pushover.net/api#sounds) for samples]):
SOUND_PUSHOVER (default)
SOUND_BIKE
SOUND_BUGLE
SOUND_CASHREGISTER
SOUND_CLASSICAL
SOUND_COSMIC
SOUND_FALLING
SOUND_GAMELAN
SOUND_INCOMING
SOUND_INTERMISSION
SOUND_MAGIC
SOUND_MECHANICAL
SOUND_PIANOBAR
SOUND_SIREN
SOUND_SPACEALARM
SOUND_TUGBOAT
SOUND_ALIEN
SOUND_CLIMB
SOUND_PERSISTENT
SOUND_ECHO
SOUND_UPDOWN
SOUND_NONE