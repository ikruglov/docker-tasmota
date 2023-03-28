// user_config_override_shelly_base.h

#define _USER_CONFIG_OVERRIDE_H_
// source https://github.com/arendst/Tasmota/blob/development/tasmota/my_user_config.h

// -- Setup your own Wifi settings  ---------------
#undef WIFI_CONFIG_TOOL
#define WIFI_CONFIG_TOOL    WIFI_RETRY

//#undef  STA_SSID1
//#define STA_SSID1         "MY_USER_CONFIG_SETTINGS"

//#undef  STA_PASS1
//#define STA_PASS1         "MY_USER_CONFIG_SETTINGS"

//#undef NTP_SERVER1
//#define NTP_SERVER1       "MY_USER_CONFIG_SETTINGS"

//#undef NTP_SERVER2
//#define NTP_SERVER2       "MY_USER_CONFIG_SETTINGS"

//#undef NTP_SERVER3
//#define NTP_SERVER3       "MY_USER_CONFIG_SETTINGS"
//

// -- Time - Start Daylight Saving Time and timezone offset from UTC in minutes
// TimeDst 0,0,3,1,2,120
#undef TIME_DST_HEMISPHERE
#define TIME_DST_HEMISPHERE    North             // [TimeDst] Hemisphere (0 or North, 1 or South)

#undef TIME_DST_WEEK
#define TIME_DST_WEEK          Last              // Week of month (0 or Last, 1 or First, 2 or Second, 3 or Third, 4 or Fourth)

#undef TIME_DST_MONTH
#define TIME_DST_MONTH         Mar               // Month (1 or Jan, 2 or Feb, 3 or Mar, 4 or Apr, 5 or May, 6 or Jun, 7 or Jul, 8 or Aug, 9 or Sep, 10 or Oct, 11 or Nov, 12 or Dec)

#undef TIME_DST_DAY
#define TIME_DST_DAY           Sun               // Day of week (1 or Sun, 2 or Mon, 3 or Tue, 4 or Wed, 5 or Thu, 6 or Fri, 7 or Sat)

#undef TIME_DST_HOUR
#define TIME_DST_HOUR          2                 // Hour (0 to 23)

#undef TIME_DST_OFFSET
#define TIME_DST_OFFSET        +120              // Offset from UTC in minutes (-780 to +780)

// TimeStd 0,0,10,1,3,60
#undef TIME_STD_HEMISPHERE
#define TIME_STD_HEMISPHERE    North             // [TimeStd] Hemisphere (0 or North, 1 or South)

#undef TIME_STD_WEEK
#define TIME_STD_WEEK          Last              // Week of month (0 or Last, 1 or First, 2 or Second, 3 or Third, 4 or Fourth)

#undef TIME_STD_MONTH
#define TIME_STD_MONTH         Oct               // Month (1 or Jan, 2 or Feb, 3 or Mar, 4 or Apr, 5 or May, 6 or Jun, 7 or Jul, 8 or Aug, 9 or Sep, 10 or Oct, 11 or Nov, 12 or Dec)

#undef TIME_STD_DAY
#define TIME_STD_DAY           Sun               // Day of week (1 or Sun, 2 or Mon, 3 or Tue, 4 or Wed, 5 or Thu, 6 or Fri, 7 or Sat)

#undef TIME_STD_HOUR
#define TIME_STD_HOUR          3                 // Hour (0 to 23)

#undef TIME_STD_OFFSET
#define TIME_STD_OFFSET        +60               // Offset from UTC in minutes (-780 to +780)

// -- Location ------------------------------------
#undef LATITUDE
#define LATITUDE               52.378351         // [Latitude] Your location to be used with sunrise and sunset
#undef LONGITUDE
#define LONGITUDE              4.899707          // [Longitude] Your location to be used with sunrise and sunset

// -- Application ---------------------------------
#undef APP_TIMEZONE
#define APP_TIMEZONE           99                 // [Timezone] +1 hour (Amsterdam) (-13 .. 14 = hours from UTC, 99 = use TIME_DST/TIME_STD)

#undef APP_POWERON_STATE
#define APP_POWERON_STATE      POWER_ALL_SAVED  // [PowerOnState] Power On Relay state
                                                //   (POWER_ALL_OFF, POWER_ALL_ON, POWER_ALL_SAVED_TOGGLE, POWER_ALL_SAVED, POWER_ALL_ALWAYS_ON, POWER_ALL_OFF_PULSETIME_ON)

#undef APP_BLINKTIME
#define APP_BLINKTIME          100               // [BlinkTime] Time in 0.1 Sec to blink/toggle power for relay 1
#undef APP_BLINKCOUNT
#define APP_BLINKCOUNT         1                 // [BlinkCount] Number of blinks (0 = 32000)

// -- MQTT ----------------------------------------
#undef MQTT_USE
#define MQTT_USE          true

//#undef  MQTT_HOST
//#define MQTT_HOST         "MY_USER_CONFIG_SETTINGS"

//#undef  MQTT_PORT
//#define MQTT_PORT         "MY_USER_CONFIG_SETTINGS"

#undef MQTT_FULLTOPIC
#define MQTT_FULLTOPIC    "%prefix%/%topic%/"

#undef MQTT_KEEPALIVE
#define MQTT_KEEPALIVE         30

#undef MQTT_POWER_RETAIN
#define MQTT_POWER_RETAIN      true            // [PowerRetain] Power status message may send retain flag (false = off, true = on)

// -- HTTP ----------------------------------------
#undef GUI_SHOW_HOSTNAME
#define GUI_SHOW_HOSTNAME true

#undef USE_EMULATION_HUE
#undef USE_EMULATION_WEMO

// -- TLS -----------------------------------------
#undef MQTT_TLS_ENABLED
#define MQTT_TLS_ENABLED true

#ifndef USE_MQTT_TLS
  #undef USE_MQTT_TLS
  #define USE_MQTT_TLS

  #undef USE_MQTT_TLS_CA_CERT
  #define USE_MQTT_TLS_CA_CERT

  /*
  // this block is necessary only for client certs
  // TLSKey command doesn't work without it
  #undef USE_MQTT_AWS_IOT
  #define USE_MQTT_AWS_IOT

  #undef USE_MQTT_TLS_FORCE_EC_CIPHER
  #define USE_MQTT_TLS_FORCE_EC_CIPHER
  */

  #undef INCLUDE_LOCAL_CERT
  #define INCLUDE_LOCAL_CERT

  #undef OMIT_LETS_ENCRYPT_CERT
  #define OMIT_LETS_ENCRYPT_CERT

  #undef OMIT_AWS_CERT
  #define OMIT_AWS_CERT
#endif

// -- Syslog --------------------------------------
//#undef SYS_LOG_HOST
//#define SYS_LOG_HOST           "MY_USER_CONFIG_SETTINGS"

#undef SYS_LOG_PORT
#define SYS_LOG_PORT           514

#undef SYS_LOG_LEVEL
#define SYS_LOG_LEVEL          LOG_LEVEL_INFO

#undef SERIAL_LOG_LEVEL
#define SERIAL_LOG_LEVEL       LOG_LEVEL_INFO

#undef WEB_LOG_LEVEL
#define WEB_LOG_LEVEL          LOG_LEVEL_INFO

#undef MQTT_LOG_LEVEL
#define MQTT_LOG_LEVEL         LOG_LEVEL_INFO

// -- Features ------------------------------------
#undef USE_DOMOTICZ
#undef USE_DISCOVERY
#undef USE_TIMERS
#undef USE_TIMERS_WEB
#undef USE_SUNRISE

// -- Rules or Script  ----------------------------
#undef USE_RULES
#undef USE_SCRIPT
#undef SUPPORT_MQTT_EVENT

// -- Optional modules ----------------------------
#undef ROTARY_V1
#undef USE_ARILUX_RF
#undef USE_ARMTRONIX_DIMMERS
#undef USE_BUZZER
#undef USE_DEEPSLEEP
#undef USE_DEVICE_GROUPS
#undef USE_EXS_DIMMER
#undef USE_HOTPLUG
#undef USE_KEELOQ
#undef USE_PS_16_DZ
#undef USE_PWM_DIMMER
#undef USE_RF_FLASH
#undef USE_SHELLY_DIMMER
#undef USE_SHUTTER
#undef USE_SONOFF_D1
#undef USE_SONOFF_IFAN
#undef USE_SONOFF_RF
#undef USE_SONOFF_SC
#undef USE_TUYA_MCU

// -- Optional light modules ----------------------
#undef USE_BP1658CJ
#undef USE_BP5758D
#undef USE_DGR_LIGHT_SEQUENCE
#undef USE_ELECTRIQ_MOODL
#undef USE_LIGHT
#undef USE_LIGHT_ARTNET_MCAST
#undef USE_LIGHT_PALETTE
#undef USE_LIGHT_VIRTUAL_CT
#undef USE_LSC_MCSL
#undef USE_MY92X1
#undef USE_SM16716
#undef USE_SM2135
#undef USE_SM2335
#undef USE_SONOFF_L1
#undef USE_WS2812

// -- Sensors -------------------------------------
#undef USE_DS18x20
#undef USE_I2C
#undef USE_SPI

// -- Infra Red -----------------------------------
#undef USE_IR_REMOTE
