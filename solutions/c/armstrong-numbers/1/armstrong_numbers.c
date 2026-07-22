#include "armstrong_numbers.h"
#include "math.h"
/* 
- 9 is an Armstrong number, because `9 = 9^1 = 9`
- 10 is _not_ an Armstrong number, because `10 != 1^2 + 0^2 = 1`
- 153 is an Armstrong number, because: `153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153`
- 154 is _not_ an Armstrong number, because: `154 != 1^3 + 5^3 + 4^3 = 1 + 125 + 64 = 190`
*/

bool is_armstrong_number(int candidate){
    int original_candidate = candidate;
    int digit = 0;
    int i = 0;
    double result_of_power = 0;
    bool true_or_false;
    
    if (candidate == 0){
        return true;
    }

    // Proof to find number of digits 
    int number_of_digits = (int)log10(candidate) + 1; // Truncates to be same as a floor 
    int array_of_digits[number_of_digits]; // Array will be size of number_of_digits

    while (candidate > 0){
        digit = candidate % 10;
        candidate /= 10;
        array_of_digits[i] = digit;
        i++;
    }
    
    int j = number_of_digits;
    //result_of_power += pow((double)array_of_digits[j], (double)number_of_digits);
    while (j - 1 > -1){
        result_of_power += pow((double)array_of_digits[j - 1], (double)number_of_digits);
        j--;
    }

    if (result_of_power == original_candidate){
        true_or_false = true;
    } 
    else{
        true_or_false = false;
    } 

    return true_or_false; // Return a bool
}
