/**
 * @file SmartUnitConverter.c
 * @author Jesutofunmi Kupoluyi (jimsufficiency@gmail.com)
 * @brief  This is a program that converts between imperial 
 *         and SI units. 
 * @version 0.1
 * @date 2023-03-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/**
 *  1 meter = 3.2808 feet
 *  1 gram = 0.002205 pounds
 *  •F = 32 + 1.8 * •C
 * 
*/

/* Including necessary libraries */
#include <stdio.h>

/* Function prototypes */
void meterFeet(double x, char y);
void gramPound(double x, char y);
void _F_C(double x, char y);

int main(int argc, char const *argv[])
{
    int nConv;
    double x;
    char y;


    /* Get the number conversions to be done */
    scanf("%d", &nConv);

    for (int i = 0; i < nConv; i++)
    {
        scanf("%lf %c", &x, &y);
        meterFeet(x, y);
        gramPound(x, y);
        _F_C(x, y);
    }

    
    return 0;
}

/* Custom functions*/

void meterFeet(double x, char y)
{
    if(y == 'm')
        printf("%.6lf ft\n", 3.2808 * x);
    else if (y == 't')
        printf("%.6lf m\n", x / 3.2808);
    
}

void gramPound(double x, char y)
{
    if(y == 'g')
        printf("%.6lf lbs\n", 0.002205 * x);
    else if (y == 'l')
        printf("%.6lf g\n", x / 0.002205);
    
}

void _F_C(double x, char y)
{
    if(y == 'c')
        printf("%.6lf f\n", 32 + 1.8 * x);
    else if (y == 'f')
        printf("%.6lf c\n", (x - 32)/ 1.8);
}

