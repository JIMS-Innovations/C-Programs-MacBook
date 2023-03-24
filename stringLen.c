/**
 * @file stringLen.c
 * @author Jesutofunmi Kupoluyi(jimsufficiency@.com)
 * @brief  This is a simple program that uses pointer 
 *         arithmetic to calculate the length of a string.
 * @version 0.1
 * @date 2023-03-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/* Including necessary libraries */
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/* Function prototype */
int my_strlen(const char *);

/**
 * @brief This is the main function
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char const *argv[])
{
    printf(" The length of string \"Hello\" is : %d \n", my_strlen("Hello"));
    return 0;
}

/**
 * @brief This is a function that calculates 
 *  string length using pointer arithmetic
 * 
 * @param string 
 * @return int
 */
int my_strlen(const char *string)
{
    int length = 0;
    const char *const pFirst  = string;
    
    while (*(++string));
    
    const char *const pLast = string;

    length = pLast - pFirst;

    return length;
}
