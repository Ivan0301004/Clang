#include <stdio.h>

int main(void) {

  int digits, n, n2;
  int result = 0, fact = 1;
  int i;

  printf("Enter a number : ");
  scanf("%d", &n);
  n2 = n;
  while (n2 != 0) {
    digits = n2 % 10;
    for (i = 1; i <= digits; ++i) {
      fact *= i;
    }
    result += fact;
    fact = 1;
    n2 /= 10;
  }
  printf("%s\n", (result == n) ? "Strong" : "Not");

  return 0;
}

