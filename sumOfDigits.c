/**
 * @file sumOfDigits.c
 * @author Jesutofunmi Kupoluyi (jimsufficiency@gmail.com)
 * @brief  This is a simple program that sums up the digits
 *         of a number using recursion.
 * @version 0.1
 * @date 2023-03-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/* Including necessary libraries */
#include <stdio.h>

/* Function Prototype*/
int sumOfDigits(int);

/**
 * @brief Main function
 * 
 * @return int 
 */
int main(void)
{
    int x;
    
    scanf("%d", &x);
    
    printf("%d", sumOfDigits(x));
    
    
    return 0;
}

/**
 * @brief Function that sums up individual 
 *        digits.
 * 
 * @param n 
 * @return int 
 */
int sumOfDigits(int n)
{
    int sum = 0;
    if(n % 10 == n)
        return n;
    else
    {
        sum += (n % 10) + sumOfDigits(n/10);
        return sum;
    }
    
}