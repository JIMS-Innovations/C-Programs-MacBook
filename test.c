#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function prototype */
void my_square(int *);

int main(int argc, char const *argv[])
{
    int num = 2;

    my_square(&num);
    
    printf("2 * 2 = %d \n", num);

    return 0;
}

void my_square(int *ptr)
{
    *ptr *= *ptr;
}