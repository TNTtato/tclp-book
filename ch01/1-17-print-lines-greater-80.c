#include <stdio.h>
#define MAX_LINE    1000
#define LEN_LIMIT   80

int get_line(char s[], int lim);

int main() {

  char line[MAX_LINE];
  int max, len;
  max = 0;

  while ( (len = get_line(line, MAX_LINE)) > 0 ) {
    if (len >= LEN_LIMIT) {
      printf("%s", line);
    }
  } 

  return 0;
}

int get_line(char s[], int lim) {

  int c, i;

  for (i = 0; i < lim - 1 && ((c = getchar()) != EOF && c != '\n'); ++i) {
    s[i] = c;
  }
  if ( c == '\n' ) {
    s[i] = c;
    ++i;
  } 

  s[i] = '\0';

  return i;
}

