#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, char const *argv[])
{
    FILE *fp;
    int c;

    fp = fopen("text.txt", "r");

    if(!fp)
    {
        perror("Error opening file!");
        return -1;
    }

    while ((c = fgetc(fp)) != EOF)
        printf("%c", c);

    fclose(fp);
    fp = NULL;

    return 0;
}
