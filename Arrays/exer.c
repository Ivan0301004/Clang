#include <stdio.h>

int main(void) {

  int arr[5] = {1, 2, 3, 4, 5};
  int arr2[5] = {};

  for (int i = 0; i < 5; ++i)
    arr2[i] = arr[i];

  printf("Values of array 2 are : ");
  for (int i = 0; i < 5; ++i)
    printf("%d ", arr2[i]);
  printf("\n");
  
  printf("Values of ARRAY : ");
  for (int i = 0; i < 5; ++i)
    printf("%d ", arr[i]);
  printf("\n");




  return 0;
}