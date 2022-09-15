#include <stdio.h>
#include <stdlib.h>


int parse_int(char *s) {
  int resultado = 0;
  int sign = 1;
  int i = 0;
  if(s[i] == '-')  {
    sign = -1;
    i++;
  }
  while (s[i] != 0) {
    resultado = resultado * 10 + s[i] - '0';
    i++;
  }
  return resultado * sign;
}

int main(int argc, char *argv[]) {
  char *num = argv[1];
  int atoi = parse_int(num);
  printf("%d\n", atoi);
  return 0;
}
