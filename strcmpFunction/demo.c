#include <stdio.h>
#include <string.h>

int main(void) {

  char name[] = "Cannibal Corpses";
  char nameTwo[] = "Cannibal Corpse";

  if (strcmp(name, nameTwo) == 0)
    printf("Are equal\n");
  else
    printf("Are different\n");

  char i = 0b01001001;
  char v = 0b01010110;
  char a = 0b01000001;
  char n = 0b01001110;
  char nombre[] = {0b01001001, 0b01010110, 0b01000001, 0b01001110};

  printf("My letter is : %c%c%c%c\n", i, v, a, n);
  printf("My array name is : %s\n\n", nombre);
  
  printf("name with loop \n\n");
  for (int i = 0; i < 4; ++i)
    printf("%c",nombre[i]);
  printf("\n");


  printf("Not operator : %d\n", ~10);

  return 0;
}