#include "dnd_character.h"
#include <stdlib.h>
#include <time.h>
#include <math.h>

int ability(void){
    int dice_throws[4];
    int random_num = 0;
    int min = 1;
    int total_sum = 0;

    // Seed the random number generator with current time
    srand(time(NULL));
    // Formula: (rand() % (max - min - 1)) + min
    // Feeding those rand num into the array
    for (int i = 0; i < 4; i++){
            random_num = (rand() % (7)) + 1;
            dice_throws[i] = random_num;
    }
    // Finds the min of dice_throws[] 
    for (int i = 0; i < 3; i++){
        if (dice_throws[i] < dice_throws[i + 1])
            min = dice_throws[i];  
    }
    // Add's all elements together
    for (int i = 0; i < 3; i++){
        total_sum += dice_throws[i];
    }
    // Subtract the min from total_sum
    total_sum -= min;

    return total_sum;
}

// To find modifier: take ability - 10 % 2 round down (floor)
int modifier(int score){
    int score_modifier = 0;

    score_modifier = floor((score - 10) / 2.0); 

    return score_modifier;
}

dnd_character_t make_dnd_character(void){
    dnd_character_t character;

    character.strength = ability();
    character.dexterity = ability();
    character.constitution = ability();
    character.intelligence = ability();
    character.wisdom = ability();
    character.charisma = ability();
    character.hitpoints = 10 + modifier(character.constitution);
    return character;
}
