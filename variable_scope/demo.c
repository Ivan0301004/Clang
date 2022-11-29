#include <stdio.h>

int a = 9;


int main(void) {
  printf("A global : %d\n", a);
  int a = 98;
  printf("a : %d\n", a);

  {
    int y = 89;
    printf("Y : %d\n", y);
  }

  return 0;
}