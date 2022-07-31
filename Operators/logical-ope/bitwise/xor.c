#include <stdio.h>

// Bitwise operator ( XOR "^")
// Result of XOR is 1 when two numbers are diffrent otherwise tghe result is 0

void swap(int x, int y) {
  x = x ^ y;
  y = x ^ y;
  x = x ^ y;
  printf("%d %d\n", x, y);
}

int main(void) {

  int a = 4, b = 3;
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;
  printf("a : %d | b : %d\n", a, b);

  int y = 7;
  y ^= 5;
  printf("%d\n", printf("%d", y += 3));
  printf("%d\n",printf("%d",1));
  return 0;
}
