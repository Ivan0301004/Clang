#include <stdio.h>
#include <stdlib.h>

void printAllWord(FILE *);

int main(void) {

  FILE *read;

  if ((read = fopen("ivan.txt", "r")) == NULL) {
    perror("Error opening files\n");
    exit(EXIT_FAILURE);
  }
  printAllWord(read);

  fclose(read);

  return EXIT_SUCCESS;
}

void printAllWord(FILE *read) {
  char tmp[20];
  int i = 1;

  while (fscanf(read, "%s", tmp) != EOF) {
    printf("Word %d: %s\n", i, tmp);
    i++;
  }
}

