#include <stdio.h>

int main() {
  for (int i = 0; i < 16; i++) {
    putchar(i + '0');
  }
  for (int i = 10; i < 16; i++) {
    putchar(i + 'a');
  }
  putchar('\n');
  return 0;
}
