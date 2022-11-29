#include <stdio.h>

/*  Write a program in C to store elements in an array and print it */

int main(void) {
  int arr[10];

  for (int i = 0; i < 10; ++i)
    scanf("%d", &arr[i]);

  printf("Array From user :: \n");
  for (int i = 0; i < 10; ++i)
    printf("Element %d = %d\n", i, arr[i]);

  return 0;
}