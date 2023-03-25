/**
 * @file reverseFilePrint.c
 * @author Jesutofunmi Kupoluyi(jimsufficiency@gmail.com)
 * @brief  This is a program that prints file contents
 *         in reverse.
 * @version 0.1
 * @date 2023-03-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/* Including necessary files */
#include <stdio.h>

/* Definitions */
#define FILENAME "text.txt"


int main(void)
{
    /* Creating file pointer */
    FILE *fp;

    /* Opening file in read only mode */
    fp = fopen(FILENAME, "r");
    
    /* Checking if file opened successfully */
    if(!fp)
        return -1;

    /* Seek the end of file*/
    fseek(fp, 0, SEEK_END);

    /* Get current position */
    long end = ftell(fp);

    /* Print contents of the file while seeking to the start of file*/
    while ((end--) > 0)
    {
        fseek(fp, end, SEEK_SET);
        fputc(fgetc(fp), stdout);
    }
    
    /* Print current position */
    printf("\n\n%d\n", end);

    /* Close file */
    fclose(fp);
    fp = NULL;

    return 0;
}
