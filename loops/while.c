#include <stdio.h>

int main(void) {
  int n;
  printf("Enter a number : ");
  scanf("%d", &n);

  while (n != 0) {
    if (n < 0)
      break;
    printf("Enter a number : ");
    scanf("%d", &n);
  }

  return 0;
}
