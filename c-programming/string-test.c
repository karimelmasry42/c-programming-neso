#include <stdio.h>
int main() {
  char *test1 = "test1";
  puts(test1);
  test1 = "test2";
  puts(test1);
  int list[] = {[1 ... 9] 3};
  int a = 0;
  int whitespace[256] = {
      [0] = 1, ['\t'] = 1, ['\f'] = 1, ['\n'] = 1, ['\r'] = 1};
  for (int i = 0; i < 10; ++i) {
    printf("%d", list[i]);
  }

  return 0;
}