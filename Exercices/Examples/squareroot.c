#include <stdio.h>

double squareRoot(int n) {
  double start, end, mid;
  start = 0, end = n;
  while ((end - start) >= 0.00000001) {
    mid = (start + end) / 2;
    if (mid * mid < n)
      start = mid;
    if (mid * mid >= n)
      end = mid;
  }
  return mid;
}

int main(void) {

  int n;
  double start, end, mid;
  scanf("%d", &n);

  printf("The square root of %d is %.5lf\n", n, squareRoot(n));

  return 1;
}
