#include <stdio.h>

int main(void) {
  FILE *even, *odd;

  int n = 10;
  size_t k = 0;

  even = fopen("even.txt", "w");
  odd = fopen("odd.txt", "w");

  for (k = 1; k < n - 1; k++) {
    k % 2 == 0 ? fprintf(even, "%d\n", k) : fprintf(odd, "%d\n", k);



  }
  fclose(even);
  fclose(odd);

  return 0;
}