#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int a, b, c, z;
    int A = 0;
    int B = 0;
    int C = 0;
  for(int i = 1; i <= n; i++){
      z = i + 1;
      while(z <= n){
        a = i & z;
        b = i | z;
        c = i ^ z;
        ((a > A) && (a < k)) ? (A = a) : (A);
        ((b > B) && (b < k)) ? (B = b) : (B);
        ((c > C) && (c < k)) ? (C = c) : (C);
        z++;
      }
      
  }

  
  printf("%d\n%d\n%d\n", A, B, C);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
