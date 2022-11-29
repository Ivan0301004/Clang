#include <inttypes.h>
#include <stddef.h>
#include <stdio.h>

int main(void) {
  char name[10] = "Hello";
  char const *fat = "Fatima Rodriguez\n";
  printf("Crush name : %c\n", fat[0]);

  char *str = ("Hello "
               "Fatima");
  printf("%s\n", str);

  char *fmt = "%" PRId16;
  printf("PRI : %s\n", fmt);

  wchar_t *exa = L"c";
  printf("wchar_t : %s\n", exa);

  printf("condition : %d\n", 1 == 1);

  for (int i = 0; i < 7; i++) {
    printf("%c ", fat[i]);
  }
  printf("\n");

  int b = 0;
  int a = 112, d = 23, c = 12;
  // a = b ? c : d;

  // printf("a = %d\n", a);

  int bigger = a > d ? (a > c ? a : c) : (d > c ? d : c);

  printf("Bigger %d\n", bigger);

  return 0;
}

