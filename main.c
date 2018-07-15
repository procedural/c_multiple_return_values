#include <stdio.h>

#define $ procedure_1
struct $ { int x; int y; } $(int a, int b) {
struct $ out = {0};

  out.x = a + b;
  out.y = a - b;

  return out;
}

#define $ procedure_2
struct $ { int x; int y; } $(int a, int b) {
struct $ out = {0};

  out.x = a * b;
  out.y = a / b;

  return out;
}

int main() {
  struct procedure_1 a = procedure_1(40, 2);
  struct procedure_2 b = procedure_2(100, 8);

  printf("a.x: %d, a.y: %d\n", a.x, a.y);
  printf("b.x: %d, b.y: %d\n", b.x, b.y);
}