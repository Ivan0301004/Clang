#include <stdio.h>

int main(void) {
  
  int i = 5;
  int var = sizeof(i++);
  printf("%d %d \n", i, var);

  return 0;
}