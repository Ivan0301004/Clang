#include <stdio.h>

int main(void) {
  int num = 9;
  int num2 = 4;

  int div = num / num2;
  printf("Div : %d\n", div);

  /*double type = (double) num;
  printf("num : %f\n", type);*/

  double div2 = (double) num / num2;
  printf("Div 2 : %.2f\n", div2);


  return 0;
}