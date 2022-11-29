#include <stdio.h>

int main(void) {
  int m = 0;
  int n = 0;
  scanf("%d", &m);
  
  if (m > 0)
    n = 0;
  else if (m == 0)
    n = 1;
  else
    n = -1;
  printf("n = %d\n", n);

  return 0;
}