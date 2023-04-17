/*
11 Apr 2023
Karim Elmasry

Accessing the last element in a 3D array using pointers in 3 different ways
*/
#include <stdio.h>
int main() {
  int a[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
  printf("%d\n", *(**a + 7));
  printf("%d\n", *(*(*a + 3) + 1));
  printf("%d\n", *(*(*(a + 1) + 1) + 1));
  int x = 10;
  printf("&x = %d, &x + 1 = %d\n", &x, &x + 1);
  return 0;
}