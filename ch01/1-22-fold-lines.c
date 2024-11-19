/*
 * Exercise 1-22. Write a program to "fold" long input lines into two or more
shorter lines after the last non-blank character that occurs before the n-th
column of input. Make sure your program does something intelligent with very
long lines, and if there are no blanks or tabs before the specified column.
*/

#define FOLD_COLUMN         20
#define MAX_COL_NON_BLANK   5
#define MAX_LINE_SIZE       1000
#define TAB_SIZE            8

#include <stdio.h>

int get_line(char line[], int size);

int main() {

  int c, ncol, non_blank;

  ncol = non_blank = 0;

  while ((c = getchar()) != EOF) {
    putchar(c);
    if (c != '\n') {

      if (c == '\t') {
        ncol += TAB_SIZE;
      } else
        ++ncol;
      
      if (ncol - FOLD_COLUMN >= 0) {
        if (c == ' ') {
          putchar('\n');
          ncol = 0;
        } else if (non_blank >= MAX_COL_NON_BLANK) {
          putchar('-');
          putchar('\n');
          ncol = 0;
          non_blank = 0;
        } else {
          ++non_blank;
        }
      }

    } else {
      ncol = 0;
    }
  }
  
}
