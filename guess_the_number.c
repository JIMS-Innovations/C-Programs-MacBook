/**
 * @file guess_the_number.c
 * @author Jesutofunmi Kupoluyi (innovationsjims@domain.com)
 * @brief This is a number guessing game program.
 * @version 0.1
 * @date 2022-08-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */

// Including required libraries
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef enum {SUCESS, FAILURE} STATUS;

// variables
time_t t;
int numberOfTries = 5;
int randomNumber =  0;
int guess;
STATUS game;

// main
int main(int argc, char const *argv[])
{
    // generating random number
    srand((unsigned)time(&t));
    randomNumber = rand() % 21;

    //Intro
    printf("This is a guessing game\n");
    printf("I have chosen a number between 1 to 20 which you must guess\n");

    for (int i = numberOfTries; i > 0; i--)
    {
        printf("You have %d tries left\n", numberOfTries);
        printf("Enter a guess: ");
        scanf("%d", &guess);
        if (guess == randomNumber)
        {
            printf("Congratulations. You guessed it!\n");
            game = SUCESS;
            return 0;
        }
        else if (guess > randomNumber)
        {
            printf("Yikes %d is wrong. My number is less than that\n", guess);
            game = FAILURE;
        }
        else if (guess < randomNumber)
        {
            printf("Yikes %d is wrong. My number is greater than that\n", guess);
            game = FAILURE;
        }
        else if (guess < 0 || guess > 20)
        {
            printf("I said My number is between 0 and 20\n");
        }
        
        numberOfTries--;
    }
    if (game == FAILURE)
    {
        printf("Game Over. The number was %d\n", randomNumber);
    }
    
    
    return 0;
}
