#include "eliuds_eggs.h"

int egg_count(int decimal_eggs)
{
    int count = 0;
    while (decimal_eggs != 0)
    {
        count += decimal_eggs & 1;
        decimal_eggs = decimal_eggs >> 1;
    } 

    return count;
}
