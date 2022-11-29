#include <stdio.h>

int main(void) {

  int user[4] = {2, 3, 4, 5};
  int cpy[4];

  printf("user %p\n",user);
  printf("cpy %p\n",cpy);


  printf("array user: ");
  for (int i = 0; i < 4; ++i)
    printf("%d ", user[i]);
  printf("\n");

  printf("Array copy : ");
  for (int i = 0; i < 8; ++i) {
    cpy[i] = user[i];
    printf("%d ", cpy[i]);
  }
  printf("\n");

  return 0;
}