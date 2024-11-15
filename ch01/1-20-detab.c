/*
 * Exercise 1-20. Write a program detab that replaces tabs in the input with the
proper number of blanks to space to the next tab stop. Assume a fixed set of
tab stops, say every n columns. Should n be a variable or a symbolic parameter?*/

#include <stdio.h>
#define COLUMNS 8

int main() {

  int c, i, cols_counter;

  cols_counter = 0;


  while ((c = getchar()) != EOF) {
    if (c == '\t')
      for (i = 0; i < COLUMNS - (cols_counter % COLUMNS); ++i)
        putchar(' ');
    else {
      putchar(c);
      ++cols_counter;
    }

    if (c == '\n')
      cols_counter = 0;
  }

  return 0;
}
