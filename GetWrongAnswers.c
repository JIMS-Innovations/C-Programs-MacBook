#include <stdio.h>

char *getWrongAnswers(int N, char *C)
{
  // Write your code here
  char result[100];
  for (int i = 0; i < N; i++)
  {
    if (C[i] == 'A')
      result[i] = 'B';
    else
      result[i] = 'A';
  }
  char *ret = result;
  return ret;
}

int main(int argc, char const *argv[])
{
  // char* test = "ABA";
  int i = 0, foo = 0, bar = 0;
  while (i < 17)
  {
    i++;
    foo += i;
  }
  for (i = 0; i < 17; i++)
  {
    bar += i;
  }
  printf("foo: %d, bar: %d \n", foo, bar);
  return 0;
}
