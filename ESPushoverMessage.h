#include <Arduino.h>

enum Pushoversounds {
	SOUND_PUSHOVER = 0,
	SOUND_BIKE = 1,
	SOUND_BUGLE = 2,
	SOUND_CASHREGISTER = 3,
	SOUND_CLASSICAL = 4,
	SOUND_COSMIC = 5,
	SOUND_FALLING = 6,
	SOUND_GAMELAN = 7,
	SOUND_INCOMING = 8,
	SOUND_INTERMISSION = 9,
	SOUND_MAGIC = 10,
	SOUND_MECHANICAL = 11,
	SOUND_PIANOBAR = 12,
	SOUND_SIREN = 13,
	SOUND_SPACEALARM = 14,
	SOUND_TUGBOAT = 15,
	SOUND_ALIEN = 16,
	SOUND_CLIMB = 17,
	SOUND_PERSISTENT = 18,
	SOUND_ECHO = 19,
	SOUND_UPDOWN = 20,
	SOUND_NONE = 21
};

enum Pushoverpriorities {
	PRIORITY_NORMAL = 0,
	PRIORITY_NONOTIFICATION = 1,
	PRIORITY_QUIET = 2,
	PRIORITY_HIGH = 3,
	PRIORITY_CONFIRMATION = 4
};

class ESPushoverMessage {
	private:
		String _message;
		String _device;
		String _title;
		String _url;
		String _url_title;
		Pushoverpriorities _priority = PRIORITY_NORMAL;
		uint16_t _retry;
		uint16_t _expire;
		uint32_t _timestamp = 0;
		boolean _ishtml;
		Pushoversounds _sound = SOUND_PUSHOVER;
	public:
		ESPushoverMessage(String);
		void setDevice(String);
		void setTitle(String);
		void setUrl(String);
		void setUrlTitle(String);
		void setPriority(Pushoverpriorities);
		void setRetry(uint16_t);
		void setExpire(uint16_t);
		void setTimestamp(uint32_t);
		void setIsHTML(boolean);
		void setSound(Pushoversounds);
		String getMessage();
		String getDevice();
		String getTitle();
		String getUrl();
		String getUrlTitle();
		int8_t getPriority();
		uint16_t getRetry();
		uint16_t getExpire();
		uint32_t getTimestamp();
		boolean getIsHTML();
		String getSound();
};