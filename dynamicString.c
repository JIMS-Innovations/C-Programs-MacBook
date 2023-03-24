/**
 * @file dynamicString.c
 * @author  Jesutofunmi Kupoluyi(jimsufficiency@gmail.com)
 * @brief  This is a program that utilizes dynamic memory
 *         for handling strings.
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


int main(int argc, char const *argv[])
{
    int nChar;
    char *string = NULL;

    printf("Please enter the number of characters: ");
    scanf("%d", &nChar);

    string = (char *)malloc( nChar * sizeof(char));
    
    /* Check if memory was allocated successfully*/
    if(string == NULL) 
        return -1;

    printf("Enter your string: ");
    scanf(" ");
    fgets(string, nChar, stdin);

    
    printf("String output: %s", string);

    /* Free your allocated memory!!! */
    free(string);
    string = NULL;

    return 0;
}
