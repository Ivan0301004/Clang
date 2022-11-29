#include <stdio.h>

void print(int n) {
  int sum = 0;
  int i = 0;
  if (i <= n) {
    sum += i;
    i++;
  }
  printf("The sum is %d \n", sum);
}

int sumRange(int n) {
  int sum = 0;
  if (n == 1)
    return 1;
  else
    sum = n + sumRange(n - 1);
  
  return sum;
}

int main(void) {

  int n = 10;
  printf("The sum of the first 10 numbers is : %d\n",sumRange(5));

  return 0;
}
 