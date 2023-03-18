#include <stdio.h>

int* sort_array(int [], int);

int main(int argc, char const *argv[])
{
    int array[10] = {3, 2, 6, 7, 4, 8, 9, 1, 5, 10}; 
    int *arr_out;

    arr_out = sort_array(array, 10);

    for(int i = 0; i < 10; i++)
    {
        printf("%d", arr_out[i]);
    }

    return 0;
}

int* sort_array(int array[], int size)
{
    int swap;
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - 1; j++)
        {
            if(array[j] > array[j+1])
            {
            swap = array[j];
            array[j] = array[j+1];
            array[j+1] = swap;
            }
        }
    }
    return array;
}