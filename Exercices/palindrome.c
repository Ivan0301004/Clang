#include <stdio.h>

int main(void) {
  int n, result = 0, remainder, q;

  printf("Enter a number : ");
  scanf("%d", &n);

  q = n;

  while (q != 0) {
    remainder = q % 10;
    result = result * 10 + remainder;
    //printf("%d\n", result);
    q /= 10;
  }

  if (n == result)
    printf("Palindrome\n");
  else
    printf("Its not Palindrome\n");

  return 0;
}


