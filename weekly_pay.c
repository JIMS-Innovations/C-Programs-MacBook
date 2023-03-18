/**
 * @file weekly_pay.c
 * @author Jesutofunnmi Kupoluyi (innovationsjims@gmail.com)
 * @brief This is a program that calculates weekly pay depending on the
 * number of hours with overtime and tax compensation.
 * @version 0.1
 * @date 2022-08-11
 *
 * @copyright Copyright (c) 2022
 *
 */

// including libraries
#include <stdio.h>

// defines
#define TAXRATE_300 0.15
#define TAXRATE_150 0.20
#define TAXRATE_REST 0.25
// variables

int main(int argc, char const *argv[])
{
    int hours;         // hours of work
    int overtime;      // overtime in hours
    double nRate = 12; // 12$ per hour
    double oRate = 18; // 18$ per hour
    double gross;      // gross pay
    double tax = 0;    // tax on pay
    // prompt the user for the number of hours
    printf("Please enter the number of hours: ");
    scanf("%d", &hours);

    // overtime calculation
    overtime = hours > 40 ? (hours - 40) : (0);

    // gross pay calculation
    gross = ((hours - overtime) * nRate) + (overtime * oRate);

    // tax
    if (gross <= 300)
    {
        tax = gross * TAXRATE_300;
    }
    else if (gross > 300 && gross <= 450)
    {
        tax = 300 * TAXRATE_300;
        tax += (gross - 300) * TAXRATE_150;
    }
    else if (gross > 450)
    {
        tax = 300 * TAXRATE_300;
        tax += (150) * TAXRATE_150;
        tax += (gross - 450) * TAXRATE_REST;
    }

    // tax = (300 * 15)/100 ;
    // printf("%d\n", tax);
    // if (gross > 300)
    // {

    //     if (gross > 450)
    //     {
    //         tax += 150 * (20 / 100);
    //         tax += (gross - 450) * (25 / 100);
    //     }
    // }

    // output
    printf("Your gross pay is: $%.2f\n", gross);
    printf("Your total tax is: $%.2f\n", tax);
    printf("Your net pay is: $%.2f\n", gross - tax);

    return 0;
}
