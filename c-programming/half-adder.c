/**
 * Project name: Half Adder
 * Author: Karim Ossama Elmasry
 * Created on: 7 Apr 2023
 * Program description:
 *
 * Solution for
 * Special Programs in C − Adding Two Numbers Without Using The Plus Operator
 * (Half Adder Method)
 * https://www.youtube.com/watch?v=QFq5vbSlXHU&list=PLBlnK6fEyqRggZZgYpPMUxdY1CYkZtARR&index=54
 */
#include <stdio.h>
int main() {
  int a, b, sum, carry;
  printf("Enter 2 numbers: ");
  scanf("%d %d", &a, &b);
  sum = a ^ b;
  carry = (a & b) << 1;
  while (carry) {
    int prev_sum = sum;
    sum ^= carry;
    carry = (prev_sum & carry) << 1;
  }
  printf("sum = %d\n", sum);
  return 0;
}