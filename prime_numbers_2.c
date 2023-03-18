/**
 * @file prime_numbers_2.c
 * @author Jesutofunmi Kupoluyi (innovationsjims@gmail.com)
 * @brief This is simple program that finds the prime numbers in a list of numbers
 * @version 0.1
 * @date 2022-11-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

// Including required libraries
#include<stdio.h>

// Definitions
#define LENGTH 100

// Variables
int num[LENGTH];
int prime[LENGTH];
_Bool isPrime;
int pLength = 0;

// Main
int main(int argc, char const *argv[])
{
    for (int i = 0; i < LENGTH; i++)
    {
        num[i] = i + 1;
        
    }
    
    for (int i = 0; i < LENGTH; i++)
    {
        int n = 0;

        for (int j = 1; j < num[i]; j++)
        {
            if (((num[i] / j) == j))
            {
                n++; 
            }  
            
        }
        if ((n <= 2))
            {
                prime[pLength] = num[i];
                pLength++;
            }
        
    }

    for (int i = 0; i < pLength; i++)
    {
        printf("%d, ", prime[i]);
    }
    printf("\n");
    printf("The total number of prime numbers is %d\n", pLength);
    
    return 0;
}
