#include <stdio.h>
#include <stdlib.h>

#define LENGHT(arr) sizeof(arr) / sizeof(arr[0])

void print(int *a) { printf("array %d\n", a[0]); }

int main(void) {

  int num[] = {3, 2, 3, 4, 5, 5, 6, 7, 7, 8, 8, 9};
  printf("Arr notation = %d\n", num[2] + 10);
  int a[6] = {11, 22, 3, 56, 76};
  int *b = a;
  printf("\t--*b arithmetic = %d\n", *(b + 4));
  print(a);
  printf("bitwise & operator : %d\n", 3&5);
  printf("bitwise ^ operator : %d\n", 3^5);
  printf("bitwise | oper<ator : %d\n", 3|5);
  printf("bitwise << operator : %d\n", 3<<5);
  printf("bitwise >> operator : %d\n", 3>>5);
  printf("bitwise ~ operator : %d\n", ~5);

  return 0;
}