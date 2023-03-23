/**
 * @file stringAssignment2.c
 * @author Jesutofunmi Kupoluyi(jimsufficiency@gmail.com)
 * @brief  This is a program that utilizes common string functions
 * @version 0.1
 * @date 2023-03-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/* Including necessary libraries */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char string[100], strArr[25][50], temp[50];
    int sLen, idx, n, j;

    printf("\n\n Print string in reverse order :\n");
    printf("\n**************************************\n");
    printf("\nPlease input the string : ");
    scanf("%s", string);

    sLen = strlen(string);

    printf("\nThe characters of the string in reverse order are : \n");

    for (idx = sLen; idx >= 0; idx--)
        printf("%c", string[idx]);

    printf("\n");
    printf("****************************************");

    printf("\n\nSorts the strings of an array using bubble sort :  \n");
    printf("\n*********************************************************\n");

    printf("Input number of strings : ");
    scanf("%d", &n);

    printf("Input string %d : \n", n);

    for (idx = 0; idx < n; idx++)
        scanf("%s", strArr[idx]);
    
    for (int i = 1; i <= n; i++)
        for (int j = 0; j <= n-1; j++)
            if (strcmp(strArr[j], strArr[j+1]) > 0)
            {
                strncpy(temp, strArr[j], sizeof(temp) - 1);
                strncpy(strArr[j], strArr[j+1], sizeof(strArr[j]) - 1);
                strncpy(strArr[j+1], temp, sizeof(strArr[j + 1]));
            }

            printf("\nThe strings after sorting : \n");

            for (int i = 0; i <= n; i++)
                printf("%s\n", strArr[i]);

    return 0;
}

