#include <stdio.h>

#define COLS 3
#define ROWS 3

int main(void) {

  int arr[ROWS][COLS] = {
      {1, 3, 4},
      {4, 5, 6},
      {9, 8, 7},
  };


  for (int i = 0; i < ROWS; i++) {
    printf("Col %d >> ", i);
    for (int j = 0; j < COLS; j++)
      printf("%d ", arr[i][j]);
    printf("\n");
  }
                                 
  return 0;
}
