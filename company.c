/**
 * @file company.c
 * @author Jesutofunmi Kupoluyi (innovationsjims@gmail.com)
 * @brief   a program to print out the values of company enum
 * @version 0.1
 * @date 2022-08-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */

//including libraries
#include<stdio.h>

//constants
enum company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

//variables
enum company var1 = XEROX;
enum company var2 = GOOGLE;
enum company var3 = EBAY;

int main(int argc, char const *argv[])
{
    printf("The value of variable is: %d\n", var1);
    printf("The value of variable is: %d\n", var2);
    printf("The value of variable is: %d\n", var3);

    return 0;
}
