#include "rna_transcription.h"
#include <string.h>
#include <stdlib.h>

/*
- `G` -> `C`
- `C` -> `G`
- `T` -> `A`
- `A` -> `U`
*/

char *to_rna(const char *dna){
    size_t size = strlen(dna) + 1;
    char *rna = malloc(size);

    if (dna[0] == '\0'){
        rna[0] = '\0'; 
    }
    else{ 
        for (int i = 0; dna[i] != '\0'; i++){
            if (dna[i] == 'G'){
                rna[i] = 'C';
            }
            else if (dna[i] == 'C'){
                rna[i] = 'G';
            }
            else if (dna[i] == 'T'){
                rna[i] = 'A';
            }
            else if (dna[i] == 'A'){
                rna[i] = 'U';
            }
        }
    }
    rna[size - 1] = '\0';

    return rna; // Returning a pointer to the first element of rna, the test should do the rest 
}

