#include "binary.h"
#include <math.h>
#include <string.h>

int convert(const char *input)
{
    int converted_number = 0;

    for (long unsigned int i = 0; i < strlen(input); i++) {
        if (input[i] == '0' || input[i] == '1') {
            continue;
        } else {
            return INVALID;
        }
    }

    // We take the array and the furthest to the right so n - 1 of array size n is power 0 and we work backwards
    for (int i = strlen(input) - 1; i >= 0; i--){
        double power = strlen(input) - i - 1;
         
        if (input[i] == '1') { 
            converted_number += pow(2, power); 
        } else {
            continue;
        }
    }
    
    return converted_number;
}

