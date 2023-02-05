#undef MODULE
#define MODULE SHELLY1

#undef USER_TEMPLATE
#define USER_TEMPLATE "{\"NAME\":\"Shelly 1\",\"GPIO\":[1,1,0,1,224,192,0,0,0,0,0,0,0,0],\"FLAG\":0,\"BASE\":46}"

// -- OTA
#ifdef ESP8266
#define OTA_URL                "http://firmware.iot.ikruglov.com/tasmota/release/tasmota-shelly-1.bin.gz"
#endif

// -- MQTT ----------------------------------------
#undef MQTT_CLIENT_ID
#define MQTT_CLIENT_ID    "shelly1_%06X"
