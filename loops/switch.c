#include <stdio.h>

#define y 23
#define t 256

int main(void) {
  int x = 256;

  switch (x) {

  default:
    printf("Wrong\n");
    break;

  case y:
    printf("Number 23\n");
    break;

  case t:
    printf("Number 256\n");
    break;
  }

  return 0;
}