#include <stdio.h>

int main(void) {
  int num[10];

  printf("Enter 10 numbers : ");

  for (int i = 0; i < 10; ++i) {
    scanf("%d", &num[i]);
  }

  for (int i = 0; i < 10; ++i) {
    printf("%d", num[i]);
    if(i < 9)
      printf(", ");
  }
  printf("\n");
  return 0;
}


