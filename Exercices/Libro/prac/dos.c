#include <stdio.h>

int main(void) {

  int sum = 0;
  for (int i = 1; i <= 200; ++i) {
    if (i % 2 == 0)
      sum += i;
  }
  printf("Sum : %d\n", sum);

  return 0;
}