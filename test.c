#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, char const *argv[])
{
    FILE *fp;
    int c;
    char str[64];

    fp = fopen("text.txt", "r");

    if(!fp)
    {
        perror("Error opening file!");
        return -1;
    }

    if (fgets(str, 64, fp) != NULL)
        printf("%s", str);

    fclose(fp);
    fp = NULL;

    return 0;
}
