#include "resistor_color_duo.h"
#include <stdint.h>

uint16_t color_code(resistor_band_t *userColors){
    uint16_t color_codes = 0;
    resistor_band_t code1 = userColors[0];
    resistor_band_t code2 = userColors[1];

    code1 *= 10;
    
    color_codes = code1 + code2;

    return color_codes;
}

