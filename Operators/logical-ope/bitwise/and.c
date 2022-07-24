#include <stdio.h>

// Bitwise operator (and = "&")
// Result of AND is 1 when both bits are 1

int main(void) {
  int y = 6;
  int p = 1;
  // printf("%d\n", y);

  if (y&p)
    printf("Nice\n");
  else if (y&&p)
    printf("Cool\n");
  else 
    printf("Nothing\n");
  return 0;
}
