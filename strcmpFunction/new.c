#include <stdio.h>
#include <string.h>

int main(void) {

  char n[] = "hola";
  char k[] = "hola";

  if (strcmp(n, k) < 0)
    printf("N is mayor\n");
  else if (strcmp(k, n) < 0)
    printf("K is mayor\n");
  else
    puts("Son iguales");
    
  return 0;
}