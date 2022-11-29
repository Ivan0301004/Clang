#include <ctype.h>
#include <stdio.h>

int main(void) {

  int i = 0, a = 0;
  char str[10] = "Iv4nF4tim4";

  for (int i = 0; i < 10; ++i) {
    if (isalpha(str[i]))
      a++;
    else
      printf("No\n");
  }
  printf("A = %d\n", a);

  printf("%s\n", isprint('i') ? "Si" : "No");

  int y = getchar();
  printf("Char Fomr getchar :  %c\n", y);

  return 0;
}
