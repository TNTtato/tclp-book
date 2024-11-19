/*
Exercise 1-23. Write a program to remove all comments from a C program.
Don't forget to handle quoted strings and character constants properly. C comments do not nest.
*/

#include <stdio.h>

void incomment(void);

int main() {
  int c1, c2;
  while ((c1 = getchar()) != EOF) {
    if (c1 == '/') {
      c2 = getchar();
      if (c2 == '*') {
        incomment();
      } else {
        putchar(c1);
        putchar(c2);
      }
    } else {
      putchar(c1);
    }
  }

  return 0;
}

void incomment(void) {
  int c1, c2, end_comment;
  end_comment = 0;
  while (end_comment == 0) {
    if ((c1 = getchar()) == '*' && (c2 = getchar()) == '/' ) {
      end_comment = 1;
    }
  }
}
