#include <stdio.h>

int fun() {
  printf("Neso");
  return 1;
}

int fun2() {
  printf("Academy");
  return 1;
}

int main(void) {

  int x = fun() + fun2();
  printf("%d\n", x);

  int y = 10 / 3 * 4;
  printf("%d\n", y);

  int a = 10, b = 20, c = 30, d = 40;
  if (a <= b == d > c)
    printf("TRUE\n");
  else
    printf("FALSE\n");

  return 0;
}
