#include <stdio.h>
#include <string.h>

int main(void) {

  char str[] = "hola,como,estas,man";
  char *comma = strrchr(str, ',');
  printf("%s\n", comma);

  char *new = strrchr(str, '#');
  if (new == NULL)
    printf("Could not find #! \n");
  else
    printf("The sign # already exist! \n");


  return 0;
}