#include <stdio.h>

int add(int y, int x) { return y + x; }

int multi(int u, int o) {
  int result = 0;
  for (int i = 0; i < u; i++) {
    result = add(result, o);
  }
  return result;
}

void print_int(int a) { printf("%d\n", a); }

int main(void) {
  int multiplication, sum;

  multiplication = multi(2, 3);
  sum = add(9, 8);
  printf("Sum : %d\n", sum);
  printf("Multiplication : %d\n", multiplication);

  print_int(9);

  return 0;
}

