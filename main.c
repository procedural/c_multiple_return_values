#include <stdio.h>

struct procedure_1{int x; int y;}
       procedure_1(int a, int b) {
struct procedure_1 out = {};

  out.x = a + b;
  out.y = a - b;

  return out;
}

struct procedure_2{int x; int y;}
       procedure_2(int a, int b) {
struct procedure_2 out = {};

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