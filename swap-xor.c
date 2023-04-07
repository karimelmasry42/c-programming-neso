/**
 * Project name: Swap XOR
 * Author: Karim Ossama Elmasry
 * Created on: 7 Apr 2023
 * Program description:
 * Flips two int variables using bitwise xor
 */
#include <stdio.h>
int main() {
  int a = 400, b = 3;
  b ^= a;
  a ^= b;
  b ^= a;
  printf("after operations, a = %d, b = %d\n", a, b);
  return 0;
}