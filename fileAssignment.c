/**
 * @file fileAssignment.c
 * @author Jesutofunmi Kupoluyi(jimsufficiency@gmail.com)
 * @brief  This is a program that converts a file characters to uppercase
 *         and create and delete temporary files.
 * @version 0.1
 * @date 2023-03-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/* Including necessary libraries */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(void)
{
    /* Creating file pointers */
    FILE *temp, *fp;

    /* Opening files */
    fp = fopen("text.txt", "r");
    temp = fopen("temp.txt", "w+");

    /* Checking if file was successfully opened */
    if(!fp || !temp)
    {
        perror("Error !");
        return -1;
    }

    /* Creating buffer variables */
    int charBufIn, charBufOut;
    
    /* Printing out original file contents */
    printf("Printing the text.txt file : \n\n");

    while ((charBufIn = fgetc(fp)) != EOF)
    {
        fputc(charBufIn, stdout);
        charBufOut = toupper(charBufIn);
        fputc(charBufOut, temp);
    }
    
    /* Closing files */
    fclose(fp);
    fclose(temp);
    fp = NULL;

    /* Reopening temp.txt file */
    temp = fopen("temp.txt", "r+");
    
    /* Printing file contents (original file contents in upper case) */
    printf("\n\nPrinting the temp.txt file : \n\n");

    while ((charBufIn = fgetc(temp)) != EOF)
    {
        fputc(charBufIn, stdout);
    }

    /* Closing temp.txt file */
    fclose(temp);

    /* Renaming temp.txt to text_2.txt */
    rename("temp.txt", "text_2.txt");

    /* Deleting temp.txt */
    remove("temp.txt");
    
    return 0;
}
