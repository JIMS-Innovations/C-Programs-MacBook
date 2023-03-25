/**
 * @file fileNoOfLines.c
 * @author Jesutofunmi Kupoluyi (jimsufficiency@gmail.com)
 * @brief   This is a program that counts the number of lines 
 *          in a file.
 * @version 0.1
 * @date 2023-03-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/* Including necessary libraries */
#include <stdio.h>


int main(int argc, char const *argv[])
{
    /* Opening the file and assigning file pointer */
    FILE *fp = fopen("text.txt", "r");

    /* Variables */
    int count  = 0;
    char charBuf;

    /* Checking if the file was successfully opened */
    if(!fp)
    {
        perror("Error: file can not be opened!\n");
        return -1;
    }

    /* Finding the number of lines using loop */
    while ((charBuf = fgetc(fp)) != EOF )
    {
        if (charBuf == '\n')
            count++;
    }
    
    /* Closing the file */
    fclose(fp);
    fp = NULL;

    /* Printing the result to output stream */
    printf("The number of lines present in the file is : %d\n", count);
    
    return 0;
}
