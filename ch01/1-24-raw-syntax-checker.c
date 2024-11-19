/*
 * Exercise 1-24. Write a program to check a C program for rudimentary syntax
errors like unbalanced parentheses, brackets and braces. Don't forget about
quotes, both single and double, escape sequences, and comments. (This program is hard if you do it in full generality.) */

#include <stdio.h>

int main() {

  int c;
  int ncurl, nbrace, npar, nsquote, ndquote;

  ncurl = nbrace = npar = nsquote = ndquote = 0;

  while ((c = getchar()) != EOF) {
    putchar(c);
    if (c == '{')
      ++ncurl;
    else if (c == '}')
      --ncurl;
    else if (c == '[')
      ++nbrace;
    else if (c == ']')
      --nbrace;
    else if (c == '(')
      ++npar;
    else if (c == ')')
      --npar;
  }

  if (ncurl != 0) {
    printf("Unbalanced curly braces\n");
  }

  if (nbrace != 0) {
    printf("Unbalanced braces\n");
  }

  if (npar != 0) {
    printf("Unbalanced parentheses\n");
  }

  return 0;
}

