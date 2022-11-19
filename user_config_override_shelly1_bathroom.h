#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

#undef APP_POWERON_STATE
#define APP_POWERON_STATE      POWER_ALL_ON     // [PowerOnState] Power On Relay state
                                                //   (POWER_ALL_OFF, POWER_ALL_ON, POWER_ALL_SAVED_TOGGLE, POWER_ALL_SAVED, POWER_ALL_ALWAYS_ON, POWER_ALL_OFF_PULSETIME_ON)

#endif  // _USER_CONFIG_OVERRIDE_H_
