#include <stdint.h>
#include <stdio.h>

int main(void) {

  uint64_t dx = 0x357620655410;
  while (dx)
    putchar(0x726F6c6564574820 >> (((dx >>= 4) & 0xF) << 3));
  printf("\n");

  return 0;
}