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


int main(void)
{
    /* Creating file pointer */
    FILE *fp;

    /* Opening file in read only mode */
    fp = fopen("text.txt", "r");
    
    /* Checking if file opene successfully */
    if(!fp)
        return -1;

    fseek(fp, 0, SEEK_END);

    long end = ftell(fp);

    while ((end--) > 0)
    {
        fseek(fp, end, SEEK_SET);
        fputc(fgetc(fp), stdout);
    }
    
    printf("\n%d\n", end);

    fclose(fp);
    fp = NULL;

    return 0;
}
