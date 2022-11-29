#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {

  char str[] = "AAsdfdaasdaweereTRerfsdSDFewWEEWasdXXc";
  int a = 0;
  int vowels = 0;
  int length = strlen(str);

  for (int i = 0; i < length; ++i) {
    switch (toupper(str[i])) {
    case 'A':
      a++;

    case 'E':
    case 'I':
    case 'O':
    case 'U':
      vowels++;
    }
  }
  printf("a = %d and vowels = %d\n", a, vowels);

  return 0;
}
