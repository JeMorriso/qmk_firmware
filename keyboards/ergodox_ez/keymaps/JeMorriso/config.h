/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
// #define ORYX_CONFIGURATOR
#undef TAPPING_TERM
#define TAPPING_TERM 190

#define ONESHOT_TAP_TOGGLE 2

#undef ONESHOT_TIMEOUT
#define ONESHOT_TIMEOUT 1000

#define USB_SUSPEND_WAKEUP_DELAY 0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL 11

#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY 4

#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED 11

#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX 35

// #define FIRMWARE_VERSION u8"QqoPD/LyAyA"
#define RGB_MATRIX_STARTUP_SPD 60

#define IGNORE_MOD_TAP_INTERRUPT
#define PERMISSIVE_HOLD

// #define PERMISSIVE_HOLD_PER_KEY
// #define HOLD_ON_OTHER_KEY_PRESS_PER_KEY
