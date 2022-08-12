#include <stdio.h>

int main(void) {
  int numero;
  printf("Single line \n");
  printf("Double quotes\n");

  int age = 14;
  printf("age = %d (%%d  = decimal or %%i = integer) age  = %i\n", age,
         age + 1);
  printf("Hola %-10d\n", 77);

  float PI = 3.141592165;
  printf("Pi as float %f\n", PI);

  double Pi = 3.141592165;
  printf("Pi as Double %f\n", Pi);

  char name[] = "Hello Fatima, Me gustas bastante\n";
  printf("%s", name);

  char letra = 65;
  printf("Letra = %c = %d\n", letra, letra);
  char letter = 'A';
  printf("Letter %d = %c\n", letter, letter);

  return 0;
}
