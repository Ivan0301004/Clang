#include <stdio.h>
#include <math.h>

int main(void) {
  int var = 75;
  int var2 = 56;
  int num;

  num = sizeof(var) ? (var2 > 23 ? ((var == 75) ? 'A' : 0) : 0) : 0;
  printf("Ternary : %d = %c\n", num, num);
  printf("%d\n", printf("%d",34));

  return 0;
}