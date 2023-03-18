/**
 * @file minutes_to_days_years.c
 * @author Jesutofunmi Kupoluyi (innovationjims@gmail.com)
 * @brief  This is a program that converts minutes to days and years
 * @version 0.1
 * @date 2022-08-07
 *
 * @copyright Copyright (c) 2022
 *
 */

/*
 
 * 1440 minutes = 1 day
 * 525600 minutes = 1 year(365 days)
 */

// including libraries
#include <stdio.h>

// variables
double minutes;
double year;
double days;

// main function
int main(int argc, char *argv[])
{
    printf("Please enter time in minutes: ");
    scanf("%lf", &minutes);

    days = minutes/1440;
    year = minutes/525600;

    printf("The equivalent of %.1lf minutes in days is %lf and in years is %lf\n", minutes, days, year);
    return 0;
}