#include "perfect_numbers.h"
#include <math.h>

int aliquot_sum(int num){
    int sum = 1;
    
    if (num == 1)
        return num;

    for (int i = 2; i <= sqrt(num); i++){
        if (num % i == 0){
            if (i == (num / i)){
                sum += i;
            } else {
                sum += (num / i) + i;
            }
        }
    }    
    
    return sum;
}

kind classify_number(int num){
    kind classification;
    int num_cmp;

    if (num <= 0)
        return ERROR;

    if (num == 1)
        return DEFICIENT_NUMBER;

    num_cmp = aliquot_sum(num);
    
    if (num_cmp == num){
        classification = PERFECT_NUMBER;
    } else if (num_cmp > num){
        classification = ABUNDANT_NUMBER;
    } else if (num_cmp < num){
        classification = DEFICIENT_NUMBER;
    } else {
        classification = ERROR;
    }

    return classification;
   }
