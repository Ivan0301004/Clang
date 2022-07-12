#include <stdio.h>

int main() {

  // Examples

  float var1 = 3.141592653589793213456;
  double var2 = 3.141592653589793213456;
  long double var3 = 3.141592653589793213456;

  // impresion del tamano en bytes de un tipo de dato, en este caso
  // variables float y double y long double
  printf("Size %lu bytes\n", sizeof(float));
  printf("Size %lu bytes\n", sizeof(double));
  printf("Size %lu bytes\n", sizeof(long double));

  // impresion de variables con su respectiva canbtidad de decimales 
  printf("%.16f\n", var1);
  printf("%.16f\n", var2);
  printf("%.21Lf\n", var3);


  // ? Another Examples 

  float div = 4 / 9;
  printf("%.2f \n", div); // the result is zero cuz de division done by integer numbers
  float div1 = 4.0 / 9;
  printf("%.2f \n", div1);
  int div2 = 4 / 9;
  printf("%.2f \n", div2);

  
  return 0;
}