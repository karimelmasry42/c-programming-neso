/**
 * Project name: Palindrome Number
 * Author: Karim Ossama Elmasry
 * Created on: 7 Apr 2023
 * Program description:
 *
 * Solution for
 * Special Programs in C − Check If The Number Is Palindrome Number
 * https://www.youtube.com/watch?v=LJ0m-8zGRB4&list=PLBlnK6fEyqRggZZgYpPMUxdY1CYkZtARR&index=48
 * A palindrome is a number or a word or a phrase if read backwards gives the
 * same number or a word or a phrase as it is being read forward.
 * Example: 1221, racecar, 24542, etc.
 */

#include <stdio.h>
int main() {
  int n;
  printf("Enter number: ");
  scanf("%d", &n);
  int flip = 0;
  for (int copy = n; copy; copy /= 10)
    flip = flip * 10 + copy % 10;
  if (flip == n)
    printf("Palindrome\n");
  else
    printf("Not Palindrome\n");
  return 0;
}