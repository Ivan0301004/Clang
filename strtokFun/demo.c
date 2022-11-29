#include <stdio.h>
#include <string.h>

int main(void) {

  char str[] = "This is my first, time";
  char com[] = ",";
  char *comOne = strtok(str, com);
  printf("com one : %s\n", comOne);

  char com2[] = " ";
  char *comTwo = strtok(str, com2);
  printf("com Two: %s\n", comTwo);

  return 0;
}