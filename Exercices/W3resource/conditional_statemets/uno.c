#include <stdio.h>

// Saber si un año es biciesto

int main(void) {
  int year = 0;

  printf("Enter a year : ");
  scanf("%d", &year);

  if (year % 4 == 0)
    printf("%d is leap year\n");
  else
    printf("%d its not a leap year\n");

  return 0;
}