#include <stdio.h>

int main(void)
{
    char word[51];
    int index = 0, length = 0;
    char swap;
    scanf("%s", word);

    /*Finding the length of the word*/
    while (word[index] != '\0')
    {
        length++;
        index++;
    }

    printf("Length: %d\n", length); /**/

    /*Sorting array using the bubble sort algorithm*/
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - 1; j++)
        {
            if (word[j] > word[j + 1])
            {
                swap = word[j];
                word[j] = word[j + 1];
                word[j + 1] = swap;
            }
        }
        printf("%s\n", word);
    }

    int count = 0;
    int reps = 0;
    char prevChar;

    /*Finding multiple occurring letters*/
    while (count < length)
    {

        if(word[count] == word[count + 1])
        {
            reps++;
            prevChar = word[count + 1];
            if(prevChar == word[count + 2])
                count = count + 3;
            else
                count = count + 2;
            
            
        }
        else
        {
            count++;
        }

        // printf("%d %c \n", count, word[count]);
        // count++;
    }

    printf("%d\n", reps);

    return 0;
}