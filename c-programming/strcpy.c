#include <stdio.h>
#include <string.h>
int main() {
  char str1[] = "bla";
  char str2[4];
  strncpy(str2, str1, 4);
  printf("|%d|", str2[3]);
  printf("\n%lu", sizeof str2);
  return 0;
}