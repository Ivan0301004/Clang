#include <stdio.h>

int main(void) {
  int n;

  printf("Enter a number : ");
  scanf("%d", &n);

  for (int i = 1; i < n; ++i) {
    if (i % 2 == 1 || i % n == 0) {
      printf("%d ", i);
    } 
  }
    printf("\n");

  return 0;
}