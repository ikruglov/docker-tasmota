// user_config_override_shelly_plug_s.h

#undef USER_TEMPLATE
#define USER_TEMPLATE "{\"NAME\":\"Shelly Plug S\",\"GPIO\":[320,1,576,1,1,2720,0,0,2624,32,2656,224,1,4736],\"FLAG\":0,\"BASE\":45}"

// -- OTA
#ifdef ESP8266
#undef OTA_URL
#define OTA_URL "http://firmware.iot.ikruglov.com/tasmota/release/tasmota-shelly-plug-s.bin.gz"
#endif

// -- MQTT ----------------------------------------
#undef MQTT_CLIENT_ID
#define MQTT_CLIENT_ID    "shelly_plug_s_%06X"

// -- Time ----------------------------------------
#define USE_TIMERS                               // Add support for up to 16 timers (+2k2 code)
#define USE_TIMERS_WEB                         // Add timer webpage support (+4k5 code)
#define USE_SUNRISE                            // Add support for Sunrise and sunset tools (+16k)
#define SUNRISE_DAWN_ANGLE DAWN_NORMAL       // Select desired Dawn Angle from (DAWN_NORMAL, DAWN_CIVIL, DAWN_NAUTIC, DAWN_ASTRONOMIC)
