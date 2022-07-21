#include <stdio.h>
// We can define a constant with MACROS as follows

#define PI 3.1412592
#define E 2.71
// As well we can define functions with macros as follows
#define ADD(x, c) x + c
#define LESS(x, v)                                                             \
  if (x < v)                                                                   \
    printf("%d is less than %d\n", x, v);                                      \
  else if (v < x)                                                              \
    printf("%d is less than %d\n", v, x);                                      \
  else                                                                         \
    printf("Are equal\n")

#define FUNCTION(name, a)                                                      \
  int fun_##name(int x) { return a*x; }

FUNCTION(quadruple, 4)
FUNCTION(double, 2)
FUNCTION(quintuple, 5)

int main() {
  const int a = 10;

  printf("Constant : %d\n", a);
  printf("quadruple(13): %d\n", fun_quadruple(13));
  printf("double(21): %d\n", fun_double(21));
  printf("quintuple(32): %d\n", fun_quintuple(32));
  printf("ADD : %.1f\n", ADD(9.0, 9));
  printf("PI : %.2f\n", PI);
  printf("E : %.1f\n", E);
  LESS(5, 7);
  LESS(7, 9);
  LESS(9, 9);
  printf("\nDate : %s\n", __DATE__);
  printf("TIME : %s\n", __TIME__);

  return 0;
}