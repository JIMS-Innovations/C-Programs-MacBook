/**
 * @file prime_numbers.c
 * @author Jesutofunmi Kupoluyi (innovationsjims@domain.com)
 * @brief This is a program to find the prime numbers in a range of numbers
 * @version 0.1
 * @date 2022-08-13
 *
 * @copyright Copyright (c) 2022
 *
 */

// including libraries
#include <stdio.h>
//#include <math.h>

// defines
int COUNT = 100;
// variables
int primes[100] = {2, 3};
int buf[100];
int n = 2;
int p = 0;

int main(int argc, char const *argv[])
{
    for (int i = 4; i <= COUNT; i++)
    {

        for (int j = 0; j <= n; j++)
        {
            int x = i / primes[j];
            int y = i % primes[j];
            buf[j] = y;
            if (j == n)
            {
                for (int a = n; a >= 0; a--)
                {
                    if (buf[a] == 0)
                    {
                        break;
                    }
                    else
                    {
                        primes[n] = i;
                        n++;
                        break;
                    }
                    
                }
                
            }
            
            
        }
    }

    for (int k = 0; k < n; k++)
    {
        printf("%d ", primes[k]);
    }
    printf("\n");

    return 0;
}
