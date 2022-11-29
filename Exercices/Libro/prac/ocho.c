#include <stdio.h>

#define HRA .10 
#define TA .05

int main(void){
  int user;
  int total;

  printf("Enter your salary : ");
  scanf("%d", &user);

  total = user + ((user * HRA)+ (user * TA));

  printf("Your total salary is : %d\n",total);

  return 0;
}