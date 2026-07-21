#include "darts.h"
#include "math.h"
/*
- If the dart lands outside the target, player earns no points (0 points).
- If the dart lands in the outer circle of the target, player earns 1 point.
- If the dart lands in the middle circle of the target, player earns 5 points.
- If the dart lands in the inner circle of the target, player earns 10 points.

The outer circle has a radius of 10 units (this is equivalent to the total radius for the entire target), 
the middle circle a radius of 5 units, and the inner circle a radius of 1.
*/

signed int score(coordinate_t landing_position){
    signed int points = 0;
    float x = landing_position.x;
    float y = landing_position.y;

    if (hypotf(x, y) <= 1){
        points = 10;
    }
    else if (hypotf(x, y) <= 5){
        points = 5;
    }
    else if (hypotf(x, y) <= 10){
        points = 1;
    }
    else {
    
        points = 0;
    }

    return points;
}

