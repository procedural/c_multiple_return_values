#include <stdio.h>

struct procedureOne {
  int x;
  int y;
};

struct procedureTwo {
  int z;
  int w;
};

struct procedureOne procedureOne(int a, int b) {
struct procedureOne out = {};

  out.x = a + b;
  out.y = a - b;

  return out;
}


struct procedureTwo procedureTwo(int a, int b) {
struct procedureTwo out = {};

  out.z = a * b;
  out.w = a / b;

  return out;
}

int main() {
  struct procedureOne a = procedureOne(40, 2);
  struct procedureTwo b = procedureTwo(100, 8);

  printf("a.x: %d, a.y: %d\n", a.x, a.y);
  printf("b.z: %d, b.w: %d\n", b.z, b.w);
}