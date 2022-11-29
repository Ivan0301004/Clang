#include <stdio.h>

int main(void){
  int user;
  printf("Number : ");
  scanf("%d", &user);

  printf("Number in Hexadecimal %X\n", user);
  printf("Number in Octal       %o\n", user);
  printf("Number in Decimal     %d\n", user);

  return 0;
}