#include <stdio.h>

/* the comma operator return the rightmost operand in the expression
  and its simply evaluates the rest of operands and finally reject 'em.

  When operands in variables are between parentesis, then the least opearand
  is printed but, if  are no parantesis then the fisrt operand is printed
*/

int main(void) {

  int a = (1, 2, 3); // with parenthesis
  printf("a : %d\n", a);

  int b = (printf("%s\n", "Hello"), 5);
  printf("b : %d\n", b);

  int y;
  y = 3, 4, 5; // no parenthesis
  printf("y : %d\n", y);

  int var;
  int num;
  num = (var=15, var+35);
  printf("Num : %d\n", num);


  return 0;
}