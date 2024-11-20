#include <stdio.h>

int main() {

  char s[] = "STRing TO Lower";

  for (int i = 0; s[i] != '\0'; ++i)
    if (s[i] >= 'A' && s[i] <= 'Z')
      s[i] = s[i] + 'a' - 'A';

  printf("%s\n", s);

  return 0;
}
