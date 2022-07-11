#include <stdio.h>

int main() {
  char name = 'n';
  char na = 98;
  printf("%c  %c \n", name, na);

  char rise = -128;
  
  for (rise; rise < 127; ++rise) {
    printf("%c ", rise);
  }

  return 0;
}

