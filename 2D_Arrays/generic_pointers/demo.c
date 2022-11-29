#include <stdio.h>

int main(void) {
  int num = 9;
  char let = 'A';
  void *ptr;
  
  ptr = &num;
  printf("Generic pointer: %d\n", *(int *)ptr);

  ptr = &let;
  printf("Generic pointer char : %c\n", *(char *)ptr);


  return 0;
}
