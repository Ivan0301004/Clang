#include <stdio.h>

int main(void) {
  int arr[4];
  int dos[4];
  int input = 0;

  printf("Ingresa 4 elementos para el array 1 : ");
  for (int i = 0; i < 4; ++i) {
    scanf("%d", &arr[i]);
  }

  printf("Ingresa 4 elemtos para el array 2 : ");
  for (int i = 0; i < 4; ++i) {
    scanf("%d", &dos[i]);
  }

  printf("Ingresa un numero : ");
  scanf("%d", &input);

  printf("El numero que ingresaste va a reemplazar el\nelemento 1 de los "
         "arrays anteriores\n\n");

  printf("El elemento dos ha sido remplazado \n");
  for (int i = 0; i < 4; ++i) {
    if (i == 1)
      arr[i] = input;
    printf("%d ", arr[i]);
  }
  printf("\n");

  printf("El elemento dos ha sido remplazado \n");
  for (int i = 0; i < 4; ++i) {
    if (i == 1)
      dos[i] = input;
    printf("%d ", dos[i]);
  }
  printf("\n");

  return 0;
}