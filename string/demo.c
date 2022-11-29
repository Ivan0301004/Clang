#include <stdio.h>
#include <string.h>

int main(void) {

  char name[] = "Fatima";
  printf("Name : %s\n", name);

  for (int i = 0; i < 7; i++)
    printf("%c", name[i]);
  printf("\n");

  char str[] = "Little fucking bitch";
  printf("%s\n", str);

  int length = strlen(str);
  printf("Lenght of my string is %d\n", length);

  int i;
  int t;

  for (int j = 0; j < length; j++) {
    if (str[j] == 't')
      t++;
    else if (str[j] == 'i')
      i++;
  }
  printf("Amount of T's : %d\n", t);
  printf("Amount of i's : %d\n", i);

  char myStr[] = "Line to move to another variable";
  char copy[100];

  strcpy(copy,myStr);

  printf("Copy : %s\n", copy);
  printf("myStr : %s\n",myStr);

  return 0;
}