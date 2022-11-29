#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

  char name[100];
  printf("Enter a string : ");
  gets(name);
  printf("Your name is : %s\n", name);

  return 0;
}
