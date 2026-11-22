#pragma once
// GPIOs match the PCB and black RP2040 Pro Micro silkscreen.
// No traces need changing to test this PIO based driver.
#define TRACKBALL_PIN_MOSI 7
#define TRACKBALL_PIN_MISO 21
#define TRACKBALL_PIN_SCLK 8
#define TRACKBALL_PIN_NCS  23
#define TRACKBALL_PIN_MOTION 9
#define TRACKBALL_DEFAULT_CPI 1600
#define WS2812_DI_PIN GP26
#define RGBLIGHT_LIMIT_VAL 80
#define RGBLIGHT_DEFAULT_VAL 48
// Optional: uncomment after creating pmw3360_srom.h from your LEGALLY obtained SROM.
#define TRACKBALL_LOAD_SROM
