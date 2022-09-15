#include <stdio.h>
#include <stdlib.h>

int nat(int n) {
  if(n == 0) return 0;
  return n + nat(n-1);
}

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  printf("%d\n", nat(n));
  return 0;
}
