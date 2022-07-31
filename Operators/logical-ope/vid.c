#include <stdio.h>

int main(void) {
  int a = 9, b = 8;
  int incre;
  incre = (a < b) && (b++); // if a < b is false then b++ its not execute but
  // if a < b is true then b++ is executed after the &&
  printf("Incre : %d\n", incre);
  printf("B : %d\n", b);

  int a1 = 4, b1 = 6;
  int incre1 = (a > b1) || (b1++);
  printf("Incre1 : %d\n", incre1);
  printf("B1 : %d\n", b1);

  return 0;
}