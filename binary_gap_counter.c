/**
 * @file binary_gap_counter.c
 * @author Jesutofunmi (innovationsjims@gmail.com)
 * @brief this is a binary gap counter program
 * @version 0.1
 * @date 2022-08-03
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
#include <stdbool.h>

/* This is a comment*/
int main(int argc, char *argv[])
{
    // needed variables
    int num_of_arg = argc;
    char *arg1 = argv[0];
    char *arg2 = argv[1];
    unsigned input;
    int j = 0;
    int result = 0;
    int bin[32];
    char start_pos;
    char end_pos;
    bool start_bin;
    bool end_bin;
    unsigned int num_1[32];
    unsigned int num_2[32];
    unsigned int num_3[32];
    int b = 0;

    printf("Enter an integer: ");
    scanf("%d", &input);

    // decimal to binary conversion
    if (input == 0)
    {
        result = 0;
    }

    while (input > 0)
    {
        bin[j++] = input % 2;
        input /= 2;
    }

    // binary gap calculation
    /*************************/

    // finding the starting '1'
    for (int i = 0; i < j; i++)
    {
        if (bin[i] == 1)
        {
            start_bin = true;
            start_pos = i;
            break;
        }
    }

    // finding the ending '1'
    for (int i = j - 1; i > 0; i--)
    {
        if (bin[i] == 1)
        {
            end_bin = true;
            end_pos = i;
            break;
        }
    }

    // confirming end point '1's
    if (start_bin && end_bin && !(start_pos == end_pos))
    {

        int m = 0;

        for (int i = start_pos; i < end_pos; i++)
        {
            int n = bin[i];
            if (n == 0)
            {
                m++;
            }
            else if ((n == 1) && (i != end_pos))
            {
                num_1[b] = i;
                num_2[b] = m;
                m = 0;
                b++;
            }
            num_3[i] = m;

            if (num_3[0] < num_3[i])
            {
                num_3[0] = num_3[i];
            }
            printf("%d ", m);
        }
        
        // finding the greatest number
        printf("\n");
    }
    result = num_3[0];
    // the final result
    // printf("The start binary position is: %d\n", start_pos);
    // printf("The end binary position is: %d\n", end_pos);
    // printf("the len of binary is : %d \n", j);

    printf("the binary gap is : %d \n", result);

    // printf("size of num 2 = %d \n", (int)sizeof(num_2));

    printf("the binary form is : ");
    for (int d = j - 1; d >= 0; d--)
    {
        printf("%d ", bin[d]);
    }
    printf("\n");

    return 0;
}
