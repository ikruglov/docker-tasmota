// user_config_override_shelly1_bathroom.h

#undef APP_POWERON_STATE
#define APP_POWERON_STATE      POWER_ALL_ON     // [PowerOnState] Power On Relay state
                                                //   (POWER_ALL_OFF, POWER_ALL_ON, POWER_ALL_SAVED_TOGGLE, POWER_ALL_SAVED, POWER_ALL_ALWAYS_ON, POWER_ALL_OFF_PULSETIME_ON)
// -- OTA
#ifdef ESP8266
#undef OTA_URL
#define OTA_URL                "http://firmware.iot.ikruglov.com/tasmota/release/tasmota-shelly1-bathroom.bin.gz"
#endif
