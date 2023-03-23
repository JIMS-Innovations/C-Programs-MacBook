/**
 * @file string_assignment.c
 * @author Jesutofunmi Kupoluyi (jimsufficiency@gmail.com)
 * @brief This is a program that contains string functions
 * @version 0.1
 * @date 2023-03-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/* Including required libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* function prototypes*/
int my_strlen(char []);
void my_strcat(char [], const char[], const char[]);
bool my_strcmp(const char [], const char []);


/* Main  function*/
int main(int argc, char **argv)
{
    printf("Test string length = %d \n", my_strlen("Hello"));

    char str[24];

    my_strcat(str, "Hello", " World!");

    printf("%s\n", str);

    printf("%d \n", my_strcmp("JP", "JP"));
    printf("%d \n", my_strcmp("JP", "jp"));


    return 0;
}

/* Custom functions*/
int my_strlen(char array[])
{
    int count = 0;

    while (array[++count] != '\0');

    return count;
}

void my_strcat(char result[], const char str1[], const char str2[])
{
        int index = 0;
        while (str1[index] != '\0')
        {
            result[index] = str1[index];  
            ++index;
        }
        
        int index2 = 0;

        while (str2[index2] != '\0')
        {
            result[index + index2] = str2[index2];
            ++index2; 
        }
        result[index + index2] = '\0';


}

bool my_strcmp(const char str1[], const char str2[])
{
    int index = 0;
    bool isEqual = false;

    while (str1[index] == str2[index] && str1[index] != '\0' && str2[index] != '\0')
        ++index;

    if (str1[index] == '\0' && str2[index] == '\0')
        isEqual = true;
    else 
        isEqual = false;

    return isEqual;

}