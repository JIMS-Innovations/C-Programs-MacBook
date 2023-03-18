/**
 * @file data_size_calculator.c
 * @author Jesutofunmi Kupoluyi (you@domain.com)
 * @brief This is a program that displays the size of a variable.
 * @version 0.1
 * @date 2022-08-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */

// including libraries
#include <stdio.h>
#include <stdlib.h>



// main function
int main(int argc, char const *argv[])
{

    printf("the size of the variable char is %zd byte\n", sizeof(char));
    printf("the size of the variable short is %zd bytes\n", sizeof(short));
    printf("the size of the variable int is %zd bytes\n", sizeof(int));
    printf("the size of the variable long is %zd bytes\n", sizeof(long));
    printf("the size of the variable long long is %zd bytes\n", sizeof(long long));
    printf("the size of the variable float is %zd bytes\n", sizeof(float));
    printf("the size of the variable double is %zd bytes\n", sizeof(double));
    printf("the size of the variable long double is %zd bytes\n", sizeof(long double));
    return 0;
}
