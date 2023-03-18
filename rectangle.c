/**
 * @file rectangle.c
 * @author Jesutofunmi Kupoluyi (innovationsjims@gmail.com)
 * @brief this program calculates the perimeter and area of a rectangle
 * @version 0.1
 * @date 2022-08-03
 *
 * @copyright Copyright (c) 2022
 *
 */

// including libraries
#include <stdio.h>
#include<stdlib.h>

// parameters
double height = 0;
double length = 0;
double perimeter = 0;
double area = 0;

int main(int argc, char *argv[])
{
    // Command line arguments
    int number_of_arg = argc;
    char *program_name = argv[0];
    char *username = argv[1];
    height = atoi(argv[2]);
    length = atoi(argv[3]);
    
    // Perimeter logic
    perimeter = 2 * (height + length);

    // Area logic
    area = length * height;

    // Print functions
    printf("The program name : %s\n", program_name);
    printf("The number of arguments : %d\n", number_of_arg);
    printf("Your username : %s\n", username);
    printf("The height is %.2fcm and the length is %.2fcm \n", height, length);
    printf("The perimeter of the rectangle is : %.2f\n", perimeter);
    printf("The area of the rectangle is : %.2f\n", area);

    return 0;
}
