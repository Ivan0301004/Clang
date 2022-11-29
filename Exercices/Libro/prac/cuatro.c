#include <stdio.h>

int main(void) {
  int arr[5];

  printf("Enter 5 elements : ");
  for (int i = 0; i < 5; ++i) {
    scanf("%d", &arr[i]);
  }

  printf("Numbers of array :: \n\n");
  for (int i = 0; i < 5; ++i) {
    printf("Value of arr[%d] = %d     ", i, arr[i]);
    printf("Addres of array[%d] = %p\n", i, &arr[i]);
  }


  return 0;
}