/**
 * Project name: Strong Number
 * Author: Karim Ossama Elmasry
 * Created on: 7 Apr 2023
 * Program description:
 *
 * Solution for
 * Special Programs in C− Check If The Number Is Strong Number
 * https://www.youtube.com/watch?v=rZtc68o-He8&list=PLBlnK6fEyqRggZZgYpPMUxdY1CYkZtARR&index=50
 * A strong number is a number in which the sum of factorial of individual
 * digits of a number is equal to the original number.
 * For example:
 * 145 = 1! + 4! + 5! = 1 + 24 + 120 = 145
 */
#include <stdio.h>
int factorial(int n) {
  int fact = n;
  while (--n > 1)
    fact *= n;
  return fact;
}
int main() {
  int n;
  printf("Enter number: ");
  scanf("%d", &n);
  int sum = factorial(n % 10);
  while (n /= 10)
    sum += factorial(n % 10);
  printf("%d\n", sum);
  return 0;
}