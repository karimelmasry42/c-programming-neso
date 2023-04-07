/**
 * Project name: Armstrong Number
 * Author: Karim Ossama Elmasry
 * Created on: 7 Apr 2023
 * Program description:
 *
 * Solution for
 * Special Programs in C− Check If The Number Is Armstrong Number
 * https://www.youtube.com/watch?v=2qcUcon5Ux0&list=PLBlnK6fEyqRggZZgYpPMUxdY1CYkZtARR&index=49
 * 
 * An Armstrong number of order n is a number in which each digit when
 * multiplied by itself n number of times and finally added together, results
 * the same number.
 *
 * For example:
 * 371 is a 3 digit number. Therefore, its order is 3 Now here, each digit is
 * multiplied by itself 3 times and finally added together and results in our
 * original number
 * i.e. 3*3*3 + 7*7*7 + 1*1*1 = 27 + 343 + 1 = 371
 */
#include <stdio.h>
int main() {
  int n;
  printf("Enter number: ");
  scanf("%d", &n);
  int order = 0;
  for (int copy = n; copy; copy /= 10, order++) {
  }
  printf("%d\n", order);
  int sum = 0;
  for (int copy = n; copy; copy /= 10) {
    int prod = 1;
    for (int i = order; i > 0; i--)
      prod *= copy % 10;
    sum += prod;
  }
  printf("%d\n", sum);
  return 0;
}