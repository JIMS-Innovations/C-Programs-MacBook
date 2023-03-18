#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    // int n;
    // int idx = 0;
    // int n_buf;
    // int m = 0;

    // scanf("%d", &n);

    // n_buf = 0;
    // int x_max = n + (n - 1);

    // for (int i = 0; i < x_max; i++)
    // {
    //     /*For the first and last parts of the matrix*/
    //     if (i == 0 || i == x_max - 1)
    //     {
    //         for (int k = 0; k < x_max; k++)
    //         {
    //             printf("%d ", n);
    //         }
    //     }
    //     /*For the everything in between...*/
    //     for (int j = 1; j <= x_max - 2; j++)
    //     {
    //         if (j <= n_buf || j >= x_max - n_buf)
    //         {
    //             printf("%d ", n);
    //         }
    //         else
    //         {
    //             printf("%d ", n - m);
    //         }
    //     }
    //     printf("\n");
    //     n_buf++;
    // }

    int n;
    scanf("%d", &n);
    for (int i = 1; i <= (2 * n) - 1; i++)
    {
        int a = n;
        for (int j = 1; j <= (2 * n) - 1; j++)
        {
            printf("%d ", a);
            if (j < i)
                a--;
            if (j > ((2 * n) - 1 - i))
                a++;
        }
        printf("\n");
    }
    return 0;
}