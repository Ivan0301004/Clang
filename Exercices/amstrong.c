#include <stdio.h>

int main(void) {
  int num, count = 0, digits;
  int result = 1, modulus;
  int sum = 0;

  printf("Enter a number : ");
  scanf("%d", &num);

  for (digits = num; digits >= 0; --digits) {
    digits /= 10;
    count += 1;
  }

  int numbers = num;
  int cnt = count;
  while (numbers != 0) {
    modulus = numbers % 10;
    while (cnt != 0) {
      result *= modulus;
      cnt--;
    }
    sum += result;
    cnt = count;
    numbers /= 10;
    result = 1;
  }
  printf("%s\n", (sum == num) ? "Amstrong" : "Not");

  return 0;
}
