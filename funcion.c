#include <stdio.h>

void print_arr(int arr[], int lenght, int i) {
  printf("%d ", arr[i]);
  i++;
  if(i != lenght) {
    print_arr(arr,lenght,i);
  } else printf("\n");
}

int main(int argc, char *argv[]) {
  int arr[] = {1,2,3,4,5};
  int lenght = sizeof(arr)/sizeof(int);
  int i = 0;
  print_arr(arr,lenght,i);
  return 0;
}
