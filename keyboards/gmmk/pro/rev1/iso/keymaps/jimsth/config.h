#pragma once

#define COMBO_COUNT 2
#define TAPPING_TOGGLE 2
// TT set to two taps

/*  Handle GRAVESC combo keys */
#define GRAVE_ESC_ALT_OVERRIDE
    //Always send Escape if Alt is pressed
#define GRAVE_ESC_CTRL_OVERRIDE
    //Always send Escape if Control is pressed

#define TAPPING_TERM 180

#ifdef RGB_MATRIX_ENABLE
    #define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_SOLID_COLOR
    #define RGB_DISABLE_WHEN_USB_SUSPENDED
#endif
