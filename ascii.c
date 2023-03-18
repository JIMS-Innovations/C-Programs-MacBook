#include <stdio.h>
/**
*@file: ascii.c
*@author: Jesutofunmi Kupoluyi
*@brief: This is a program that convert ascii printable codes to characters
*@date: 25 October, 2022
*@version: 0.1
**/

//main function
int main(){

//ascii code buffer 
char x[8];

//request user input
printf("Please your ASCII code: ");
scanf("%s", x);

//print out result
printf("Your result is: \%s\n",x);

return 0;
}
