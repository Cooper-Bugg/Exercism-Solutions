#include "grains.h"

// Returns grains on specific index (square)
uint64_t square(uint8_t index){ 
    if (index == 0 || index >= 65){
        return 0;
    }

    uint64_t grain_on_square = 1;
    int current_square = 1;

    while (current_square < index){
        grain_on_square = grain_on_square * 2;
        current_square++;
    }
    return grain_on_square;
}

// Return grains on whole board
uint64_t total(void){
    int square_count = 64;
    uint64_t total_grain = 1;
    uint64_t grain_on_square = 1;

    for (int i = 1; i < square_count; i++){
        grain_on_square = grain_on_square * 2;
        total_grain = total_grain + grain_on_square;
    }
    return total_grain;
}

