#include <stdio.h>

int atoi(char s[]);

int main() {
  printf("%d\n", atoi("2") + atoi("3"));
  return 0;
}

int atoi(char s[]) {
  int i;
  int n = 0;

  for (i = 0; s[i] >= '0' && s[i] <= '9'; i++)
    n = 10 * n + (s[i] - '0');

  return n;
}
