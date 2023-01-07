#include "config.h"
#include "quantum.h"

const is31_led PROGMEM g_is31_leds[RGB_MATRIX_LED_COUNT] = {
    {0, 0x9f, 0x7f, 0x8f},
    {0, 0x9e, 0x7e, 0x8e},
    {0, 0x9d, 0x7d, 0x8d},
    {0, 0x9c, 0x7c, 0x8c},
    {0, 0xaf, 0x3e, 0x6f},
    {0, 0xae, 0x3d, 0x6e},
    {0, 0xad, 0x4d, 0x6d},
    {0, 0xac, 0x4c, 0x6c},
    {0, 0x97, 0x77, 0x87},
    {0, 0x96, 0x76, 0x86},
    {0, 0x95, 0x75, 0x85},
    {0, 0x94, 0x74, 0x84},
    {0, 0xa7, 0x36, 0x67},
    {0, 0xa6, 0x35, 0x66},
    {0, 0xa5, 0x45, 0x65},
    {0, 0xa4, 0x44, 0x64}
};

led_config_t g_led_config = {
                                {// Key Matrix to LED Index
                                    {0, 1, 2, 3},
                                    {4, 5, 6, 7},
                                    {8, 9, 10, 11},
                                    {12, 13, 14, 15}
                                },
                                {// LED Index to Physical Position
                                    {224, 0}, {224, 22}, {224, 43}, {224, 64},
                                    {150, 0}, {150, 22}, {150, 43}, {150, 64},
                                    {75, 0}, {75, 22}, {75, 43}, {75, 64},
                                    {0, 0}, {0, 22}, {0, 43}, {0, 64}
                                },
                                {// LED Index to Flag
                                    4, 4, 4, 4,
                                    4, 4, 4, 4,
                                    4, 4, 4, 4,
                                    4, 4, 4, 4
                                }
                            };
