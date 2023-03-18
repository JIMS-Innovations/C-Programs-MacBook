#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    uint8_t a;
    uint8_t b;
    uint8_t c;
    uint8_t g;
} str1_t;

typedef struct
{
    uint32_t d;
    uint32_t e;
    uint32_t f;
} str2_t;


typedef union 
   {
       str1_t x;
       str2_t y;
   } test;

int main(int argc, char const *argv[])
{
    test val;
    val.x.a = 0x10;
    val.x.b = 0x20;
    val.x.c = 0x30;
    val.x.g = 0x40;
    // val.y.d = 40;
    val.y.e = 50;
    val.y.f = 60;
    printf("0x%x\n", val.y.d);
   
    return 0;
}
