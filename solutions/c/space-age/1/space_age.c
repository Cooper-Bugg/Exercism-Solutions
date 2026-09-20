#include "space_age.h"
// 1 year in seconds = 31,557,600
//
float age(planet_t planet, int64_t seconds){
    float planet_change = 31557600; // one year on earth
    float planet_age = 0;

    switch (planet){
        case MERCURY:
            planet_change *= 0.2408467;
            break;
        case VENUS:
            planet_change *= 0.61519726;
            break;
        case EARTH:
            planet_change *= 1.0;
            break;
        case MARS:
            planet_change *= 1.8808158;
            break;
        case JUPITER:
            planet_change *= 11.862615;
            break;
        case SATURN:
            planet_change *= 29.447498;
            break;
        case URANUS:
            planet_change *= 84.016846;
            break;
        case NEPTUNE:
            planet_change *= 164.79132;
            break;
        default:
            planet_change = -1;
            break;
    }
    if (planet_change == -1)
        return planet_change;

    planet_age = seconds / planet_change;

    return planet_age;
}
