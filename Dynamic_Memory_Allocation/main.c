#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int user = 0, nums = 0;
  int *myArr;

  printf("Enter the size of an array : ");
  scanf("%d", &user);
  
  myArr = malloc(user * sizeof(int));

  printf("Enter %d numbers : ", user);
  for (int i = 0; i < user; ++i) {
    scanf("%d", &nums);
    myArr[i] = nums;
  }

  printf("This is your array :: \n{");
  for (int i = 0; i < user; i++)
    printf("%d, ", myArr[i]);
  printf("}\n");

  free(myArr);
  
  return 0;
}

