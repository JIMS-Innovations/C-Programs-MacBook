#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function prototype */
uint8_t* my_memmove(uint8_t *src, uint8_t *dst, size_t length);

int main(int argc, char const *argv[])
{
    char *text1 = "Hello world!!!";
    char *text2 = (char *)malloc(15*sizeof(char));

    my_memmove((uint8_t*)text1, (uint8_t*)text2, 15);

    printf("%s \n", text2);
   

    return 0;
}

uint8_t* my_memmove(uint8_t *src, uint8_t *dst, size_t length)
{
    for (int i = 0; i < length; i++)
    {
        *(dst + i) = *(src + i);
    }



    return dst;
}
