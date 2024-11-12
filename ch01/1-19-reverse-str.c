#include <stdio.h>

int reverse(char s[]);

int main() {

  char test_s[100] = {'h', 'e', 'l', 'l', 'o', '!', '\0'};
  reverse(test_s);
  printf("%s\n", test_s);
  return 0;
}

int reverse(char s[]) {
  int i, j, len, tmp;
  for (i = 0; s[i] != '\0'; ++i);

  len = i;

  for (j = 0; (i - 1) != j && j < i - 1; --i, ++j ) {
    tmp = s[j];
    s[j] = s[i - 1];
    s[i - 1] = tmp;
  }
  
  return len;
}
