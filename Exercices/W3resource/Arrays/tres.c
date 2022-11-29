#include <stdio.h>

int main(void) {
  int arr[] = {1, 2, 4, 5};
  int len = sizeof(arr) / sizeof(arr[0]);

  printf("You enter numbers like that ::\n");
  for (int i = 0; i < len; ++i)
    printf("%d ", arr[i]);
  
  printf("\nAnd i reverse the numbers like that::\n");

  for (int i = len - 1; i >= 0; --i)
    printf("%d ", arr[i]);
  printf("\n");

  return 0;
}