#include <stdio.h>

int main(int argc, char *argv[]) {
  int i = 0;
  if (argc == 1)
    printf("You only have one argument\n");
  else if (argc > 0 && argc < 5) {
    printf("Here's your argument\n");
    for (i = 0; i < argc; ++i) {
      printf("%s\n", argv[i]);
    }
    printf("\n");
  } else
    printf("You have to many arguments\n");

  return 0;
} 



