#include <stdio.h>
#include <string.h>

int main(void) {

  char text[] = "Hola como estas, espero que bien, nescesito saber cuantas "
                "vocales tiene este little texto";

  int vowel = 0;
  int tama = strlen(text);

  for (int i = 0; i < tama; ++i) {

    switch (text[i]) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      vowel++;
    }
  }
  printf("El texto tiene %d vocales\n", vowel);

  return 0;
}