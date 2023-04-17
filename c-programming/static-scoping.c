#include <stdio.h>
int a = 5;
int fun2(int b) {
  int c = a + b;
  return c;
}
int fun1(int b) {
  b += 10;
  b = fun2(b);
  return b;
}
int main() {
  int a = 10;
  a = fun1(a);
  printf("%d\n", a);
  return 0;
}
