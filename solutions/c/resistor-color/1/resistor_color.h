#ifndef RESISTOR_COLOR_H
#define RESISTOR_COLOR_H

typedef enum {
    BLACK = 0, // we dont actually need to give these numbers as BLACK being the first in the list will automatically be 0 and so forth
    BROWN = 1,
    RED = 2,
    ORANGE = 3,
    YELLOW = 4,
    GREEN = 5,
    BLUE = 6,
    VIOLET = 7,
    GREY = 8,
    WHITE = 9,
} resistor_band_t;

// color_code()
int color_code(resistor_band_t color);

// colors()
resistor_band_t *colors(void);
#endif
