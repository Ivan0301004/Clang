#include <ctype.h>
#include <stdio.h>

int main(void) {

  int x = 400, y = 0, z;
  if (x >= 500)
    y = 400;
  z = 300;

  printf("Hello\n");
  printf("%d %d", y++, z + y);
  return 0;
}