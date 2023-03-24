#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, char const *argv[])
{
    FILE *fp;
    int len;
    
    fp = fopen("text.txt", "r");

    if(!fp)
    {
        perror("Error opening file!");
        return -1;
    }

    fseek(fp, 0, SEEK_END);

    len = ftell(fp);

    fclose(fp);
    fp = NULL;

    printf("The total size of text.txt is : %d bytes\n", len);

    return 0;
}
