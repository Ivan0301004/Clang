#include <stdio.h>

#define LENGHT(array) sizeof(array) / sizeof(array[0])

int minimun(int *arr, int len) {
  int m;
  m = arr[0];
  for (int i = 1; i < len; ++i) {
    if (arr[i] < m)
      m = arr[i];
  }
  return m;
}

int main(void) {

  int arr[] = {222, 34, 45, 55, 532, 23, 51, 3, 43, 12, 213, 48, 54, 12};
  printf("The minimun number is : %d\n", minimun(arr, LENGHT(arr)));
  
  return 0;
}
