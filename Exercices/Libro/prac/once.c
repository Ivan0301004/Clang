#include <stdio.h>

int three(int y, int x, int a) { return y > x ? y : x > a ? x : a; }

void triangle() {
  int b, a;
  printf("Ingresa la base : ");
  scanf("%d", &b);
  printf("Ingresa altura : ");
  scanf("%d", &a);

  printf("El area es : %d\n", (b * a) / 2);
}

int main(void) {
  int uno, dos, tres;
  uno = 12;
  dos = 13;
  tres = 42;

  printf("%d\n", three(uno, dos, tres));
  triangle();

  return 0;
}