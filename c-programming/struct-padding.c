#include <stdio.h>
int main() {
  struct foo {
    int x;
  };
  struct foo *bar;
  printf("%d\n", bar);
  printf("%d", (struct foo *)((char *)bar + sizeof(struct foo)));
  return 0;
}