#include <stdio.h>

// Programn to saber si que tipo de caracter ingreso

int main(void) {
  char op = 0;
  scanf("%c", &op);

  if ((op >= 'a' && op <= 'z') || (op >= 'A' && op <= 'Z'))
    printf("Is letter from alpabeth\n");
  else if (op > '0' && op < '9')
    printf("Is a number\n");
  else
    printf("Is a especial caracter\n");

  return 0;
}