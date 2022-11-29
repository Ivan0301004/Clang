#include <stdio.h>

int sumArr(int *arr, int lenght) {
  int sum = 0;
  for (int i = 0; i < lenght; ++i)
    sum += arr[i];

  return sum;
}

int main(void) {
  int len = 0;
  printf("Enter de number of element that you want to sum : ");
  scanf("%d", &len);

  int user[len];

  printf("Enter the numbers : ");
  for (int i = 0; i < len; ++i)
    scanf("%d", &user[i]);

  printf("The sum of elements in the Array is : %d\n", sumArr(user, len));

  return 0;
}