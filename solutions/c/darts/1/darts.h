#ifndef DARTS_H
#define DARTS_H
// Write the header yourself for look at the test_darts.c and set up the struct and 
// declare the functions needed
typedef struct{
    float x;
    float y;
} coordinate_t;

//score and maybe landing_position
signed int score(coordinate_t landing_position);

#endif
