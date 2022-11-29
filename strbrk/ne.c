#include <stdio.h>
#include <string.h>

int main(void){
  
  char letter[] = "ivan";
  char nums[] = "12312i";

  printf("%s\n", strpbrk(letter,nums));

  if (strpbrk(letter,nums) == NULL)
    printf("Fail\n");
  else
    printf("Nice\n");

  return 0; 
}