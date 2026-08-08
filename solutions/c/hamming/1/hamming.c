#include "hamming.h"
#include "string.h"

int compute(const char *lhs, const char *rhs){
    int result = 0;

    if (strlen(lhs) != strlen(rhs)){
        return -1; 
    }
    else {
        for (int i = 0; lhs[i] != '\0'; i++){
            if (lhs[i] == rhs[i]){
                result += 0;
            }
            else{
                result += 1; 
            }
        }
        return result;
    }
}
