#include <stdio.h>

// ?  Defining a scope of the variables

void fun();
int var = 10;

int main() {
  int var = 3;
  printf("%d\n", var);
  fun();
  return 0;
}

void fun() {
  printf("%d\n", var);
}