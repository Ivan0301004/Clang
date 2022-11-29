#include <stdio.h>

int main(void) {
  float num, num2;
  int var = 0;

  scanf("%f %f", &num, &num2);
  var = num + num2;

  printf("Sum floats : %d\n", var);
  printf("num2 : %f\n", num2);
  printf("num : %f\n", num);

  return 0;
}