/**
 * @file operators.c
 * @author Jesutofunmi Kupoluyi (innovationsjims@gmail.com)
 * @brief this is a program to practice operators
 * @version 0.1
 * @date 2022-08-04
 *
 * @copyright Copyright (c) 2022
 *
 */

// including libraries
#include <stdio.h>

int main(int argc, char const *argv[])
{
    unsigned int a = 0b00111100; //60
    unsigned int b = 0b00001101; //13
    int c = 0;
    c = a >> 4;
    printf("c is %d\n", c);
    return 0;
}
