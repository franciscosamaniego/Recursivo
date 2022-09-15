#include <stdio.h>
#include <stdlib.h>

//version recursiva
int fact_r(int n) {
  if (n == 0) return 1;  //caso base
  return n* fact(n-1); // reduccion
}

//version iterativa
int fact(int n) {
  int result = 1;
  for(int i = 2; i <= n; i++) {
    result *= i;
  }
  return result;
}

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  printf("el factorial de %d es %d\n", n, fact(n));
  printf("el factorial de %d es %d\n", n, fact_r(n));
  return 0;
}
