#include <stdio.h>


int main(void) {

  int n;
  printf("Enter a number : ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    printf("%d ", i * i * i);
  }
  printf("\n");

  return 0;
}
