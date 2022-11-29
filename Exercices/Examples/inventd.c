#include <stdio.h>
#include <string.h>

#define arr(arr) sizeof(arr) / sizeof(arr[0])

void pedirNombre(){
  char name[20];
  printf("Enter your name : ");
  fgets(name, sizeof(name), stdin);
}

int main(void){
  
  return 0;
}