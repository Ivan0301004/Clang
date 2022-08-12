#include <stdio.h>

int main(void) {

  int arr[] = {2, 12, 33, 24};
  // int arr2[3] = {1, 2, 3};
  int sum = 0;
  int avg;
  for (int i = 0; i < 4; ++i)
    sum += arr[i];

  avg = sum / 4;

  printf("AVG = %d\n", avg);   

  return 0;
}


