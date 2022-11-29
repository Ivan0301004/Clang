#include <stdio.h>

#define LENGHT(arr) sizeof(arr) / sizeof(arr[0])

void addOne(int *arr, int lenght) {
  for (int i = 0; i < lenght; ++i) {
    arr[i] += 1;
  }
}

int main(void) {

  int myArr[] = {1,2,3,4,5,6,7,8,9,10};
  addOne(myArr + 4, 6);

  printf("My array are \n");
  for (int i = 0; i < LENGHT(myArr); ++i) {
    printf("myArry[%d]=%d\n", i, myArr[i]);
  }

  printf("Pointer notation =  %d\n", *(myArr));


  return 0;
}

