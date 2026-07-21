#include "raindrops.h"
#include "stdio.h"
#include "string.h"

/*
- is divisible by 3, add "Pling" to the result.
- is divisible by 5, add "Plang" to the result.
- is divisible by 7, add "Plong" to the result.
- **is not** divisible by 3, 5, or 7, the result should be the number as a string.
 * */

// void does not have a return
void convert(char result[], int drops){

    if (drops % 3 == 0){
        strcat(result, "Pling");
    }

    if (drops % 5 == 0){
       strcat(result, "Plang");
    }

    if (drops % 7 == 0){
        strcat(result, "Plong");
    }

    if (result[0] == '\0'){
        snprintf(result, 16, "%i", drops);
    }

    printf("%s", result);
}
