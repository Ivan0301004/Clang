#include <stdio.h>
#include <string.h>

int main(void){

  char first[] = "Learning new programming languages and learn python";
  char find[]  = " programming";
  char new[] = "python";

  char *search = strstr(first, find);
  printf("strstrs : %s\n", search);

  char *Sec = strstr(first, new);
  if (Sec == NULL)
    printf("Could not find the python word\n");
  else
    printf("Python already exist\n");

  return 0;
}