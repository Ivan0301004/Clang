#include <stdio.h>

int main(void) {

  int sum = 0;
  for (int i = 1; i <= 10; ++i) {
    printf("%d ", 2 * i - 1 );
    sum += 2 * i - 1;
  }
  printf("\nThe sum of odd numbers is : %d\n", sum);

  return 0;
}
