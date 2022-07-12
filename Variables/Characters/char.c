#include <stdio.h>

int main() {
  char name = 'n';
  char na = 98;
  printf("%c  %c \n", name, na);

  char rise = -128;
  
  // for (rise; rise < 127; ++rise) {
  //   printf("%c ", rise);
  // }

  printf("%d\n", printf("%s", "Hello World"));
  printf("%10s", "Hello");
  printf("\n");


  char c = 255;
  c = c + 10;
  printf("%d\n", c);

  unsigned int po = 1;
  int j = -4;
  printf("%u\n", po + j);

  return 0;
}

