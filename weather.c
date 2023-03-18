/**
 * @file weather.c
 * @author Jesutofunmi Kupoluyi (jimsufficiency@gmail.com)
 * @brief This is a simple program that calculates yearly rainfall with its yearly and monthly averages.
 * @version 0.1
 * @date 2022-12-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#define MONTHS 12
#define YEARS 5


int main()
{
// Initializing data for 5 years
float rain [YEARS][MONTHS] = 
{
{1, 2, 3, 5, 5, 52, 25, 5.6, 4.5, 3.4, 5.3, 7.8},
{1, 0.9, 3, 5, 5, 2.5, 25, 5.6, 4.5, 3.4, 5.3, 7.8},
{1.6, 2, 3, 5, 5, 5.2, 6.5, 5.6, 4.5, 3.4, 5.3, 7.8},
{1, 2, 3, 5, 5, 0.2, 25, 5.6, 4.5, 3.4, 5.3, 7.8},
{1, 2, 3, 9, 5, 5.2, 2.5, 5.6, 4.5, 3.4, 5.3, 7.8}
};

int year, month;
float subtotal, total;

printf("YEAR\t\tRAINFALL  (inches)\n");

for (year = 0, total = 0; year < YEARS ; year++)
{
    for (month = 0, subtotal = 0; month < MONTHS; month++)
    {
        subtotal += rain[year][month];
    }
    
    printf("%5d \t%15.1f\n", 2010 + year, subtotal);
    total += subtotal;
}
printf("\nThe yearly average is %.1f inches. \n\n", total/YEARS);

printf("   MONTHLY AVERAGES:\n\n");
printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

for (month = 0; month < MONTHS; month++)
{
    for (year = 0, subtotal = 0; year < YEARS; year++)
        subtotal += rain[year][month];
    
    printf("%4.1f ", subtotal/YEARS);
}

printf("\n");

return 0;
}