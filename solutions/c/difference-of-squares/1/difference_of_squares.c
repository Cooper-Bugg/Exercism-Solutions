#include "difference_of_squares.h"

/* 
 * The square of the sum of the first ten natural numbers is
 * (1 + 2 + ... + 10)² = 55² = 3025.
 *
 * The sum of the squares of the first ten natural numbers is
 * 1² + 2² + ... + 10² = 385.
 *
 * Hence the difference between the square of the sum of the first ten natural numbers and 
 * the sum of the squares of the first ten natural numbers is 3025 - 385 = 2640.
*/

unsigned int sum_of_squares(unsigned int number){ // 1² + 2² + ... + 10² = 385 
    // unsigned int sum = 0; unused
    unsigned int sums_squared = 0;

    for (unsigned int i = 0; i <= number; i++){
        unsigned int squared = 0;

        squared = i * i;
        sums_squared += squared;
    }
    return sums_squared;
} 

unsigned int square_of_sum(unsigned int number){ //  (1 + 2 + ... + 10)² = 55² = 3025
    unsigned int square_sum = 0;
    unsigned int sum = 0;
    
    for (unsigned int i = 0; i <= number; i++){
        sum += i;
    }

    square_sum = sum * sum;
    
    return square_sum;
}

unsigned int difference_of_squares(unsigned int number){
    unsigned int difference;

    difference = square_of_sum(number) - sum_of_squares(number);

    return difference; 
}

