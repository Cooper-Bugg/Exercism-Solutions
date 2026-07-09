#include "collatz_conjecture.h"
/* Collatz Conjecture 
 * If it's even, divide by 2
 * If it's odd, multiply by 3 and add 1
 * */

int steps(int start){
    if (start <= 0){
        return -1;
    }

    int total_steps = 0; 

    while (start > 1){
        if (start % 2 == 0){
            start /= 2;
        } else 
            start = (start * 3) + 1;
        total_steps += 1; // Increment our steps
    } 
    return total_steps;
}
