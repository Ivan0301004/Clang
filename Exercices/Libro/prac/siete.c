#include <stdio.h>

int main(void) {
  float interest = 0.15;
  int prestamo = 0;
  int total = 0;
  int meses = 0;

  printf("Ingresa una cantidad : ");
  scanf("%d", &prestamo);

  printf("Ingresa los meses a pagar : ");
  scanf("%d", &meses);

  total = ((prestamo * interest) * meses) + prestamo;

  printf("Si tu prestamo es a %d meses, terminas pagando %d\n", meses,
         total);

  
  return 0;
}