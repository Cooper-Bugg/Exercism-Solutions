#include "triangle.h"
#include <stdbool.h>
/*
 * An equilateral triangle has all three sides the same length.
 *
 * An isosceles triangle has at least two sides the same length. 
 * (It is sometimes specified as having exactly two sides the same length, 
 * but for the purposes of this exercise we'll say at least two.)
 *
 * A scalene triangle has all sides of different lengths.
 *
 *
 * a + b >= c
 * b + c >= a
 * a + c >= b
 * 
 * */

// Helper Functions
static bool is_triangle_valid(triangle_t sides){
    if (sides.a > 0 && 
        sides.b > 0 && 
        sides.c > 0 && 
        sides.a + sides.b >= sides.c && 
        sides.b + sides.c >= sides.a && 
        sides.a + sides.c >= sides.b)
        return true;
    else 
        return false;
}

bool is_equilateral(triangle_t sides){
    if (is_triangle_valid(sides) == true &&
        sides.a == sides.b && sides.a == sides.c)
        return true;
    else
        return false;
}


bool is_isosceles(triangle_t sides){
    if (is_triangle_valid(sides) == true &&
        (sides.a == sides.b || 
        sides.b == sides.c || 
        sides.a == sides.c))
        return true;
    else
        return false;
}

bool is_scalene(triangle_t sides){
    if (is_triangle_valid(sides) == true &&
        sides.a != sides.b &&
        sides.a != sides.c &&
        sides.b != sides.c)
        return true;
    else 
        return false;
}

