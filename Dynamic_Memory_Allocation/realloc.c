#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int *numbers = 0;
  int size = 2;
  numbers = malloc(size * sizeof(int));
  int input = 0, i = 0;

  do {
    if (i == size) {
      size += 2;
      numbers = realloc(numbers, sizeof(int) * size); // Realloc function
    }
    printf("Enter a number (-1 for quit):: ");
    scanf("%d", &input);
    if (input != -1) {
      numbers[i] = input;
      i++;
    }

  } while (input != -1);

  int elements = i;
  int total = 0;

  for (int j = 0; j < elements; ++j)
    total += numbers[j];

  printf("The avarage of the %d / %d is %.2f::\n", total, elements,
         (float)total / elements);

  return 0;
}
 