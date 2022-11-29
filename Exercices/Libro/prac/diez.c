#include <stdio.h>

int main(void) {
  float pi = 3.141592;

  for (int i = 0; i < 10; ++i) {
    printf("%.df\n",i,pi);
  }

  return 0;
}