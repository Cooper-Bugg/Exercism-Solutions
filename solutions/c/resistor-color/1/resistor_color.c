#include "resistor_color.h"
// Need a colors and color_code functions  
resistor_band_t all_colors[10];

int color_code(resistor_band_t color){
    return color;    
}

resistor_band_t *colors(){ 
    all_colors[0] = BLACK;
    all_colors[1] = BROWN;
    all_colors[2] = RED;
    all_colors[3] = ORANGE;
    all_colors[4] = YELLOW;
    all_colors[5] = GREEN;
    all_colors[6] = BLUE;
    all_colors[7] = VIOLET;
    all_colors[8] = GREY;
    all_colors[9] = WHITE;

    return all_colors;
}
