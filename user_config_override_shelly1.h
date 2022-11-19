#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// source https://github.com/arendst/Tasmota/blob/development/tasmota/my_user_config.h

#undef MODULE
#define MODULE SHELLY1

#undef USER_TEMPLATE
#define USER_TEMPLATE "{\"NAME\":\"Shelly 1\",\"GPIO\":[1,1,0,1,224,192,0,0,0,0,0,0,0,0],\"FLAG\":0,\"BASE\":46}"

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

// -- Application ---------------------------------
#undef APP_POWERON_STATE
#define APP_POWERON_STATE      POWER_ALL_SAVED  // [PowerOnState] Power On Relay state
                                                //   (POWER_ALL_OFF, POWER_ALL_ON, POWER_ALL_SAVED_TOGGLE, POWER_ALL_SAVED, POWER_ALL_ALWAYS_ON, POWER_ALL_OFF_PULSETIME_ON)

// -- MQTT ----------------------------------------
#undef MQTT_USE
#define MQTT_USE          true

//#undef  MQTT_HOST
//#define MQTT_HOST         "MY_USER_CONFIG_SETTINGS"

//#undef  MQTT_PORT
//#define MQTT_PORT         "MY_USER_CONFIG_SETTINGS"

// unset user&pass to connect as ananymous by defaul
// this gives ability to control new tasmotas via tasmotas/ topic
#undef MQTT_USER
#define MQTT_USER         ""

#undef MQTT_PASS
#define MQTT_PASS         ""

#undef MQTT_CLIENT_ID
#define MQTT_CLIENT_ID    "shelly1_%06X"

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
#ifdef USE_IR_REMOTE
#undef USE_IR_REMOTE
#endif

#endif  // _USER_CONFIG_OVERRIDE_H_
