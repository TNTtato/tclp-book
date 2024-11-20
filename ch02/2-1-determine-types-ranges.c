/*
 * Exercise 2-1. Write a program to determine the ranges of char, short, int,
short int and long variables, both signed and unsigned, by printing appropriate
values from standard headers and by direct computation. Harder if you compute them: 
determine the ranges of the various floating-point types. .*/

#include <stdio.h>
#include <limits.h>

int main() {
  printf("Minimum Signed Int %d\n", INT_MIN);
  printf("Maximum Signed Int %d\n", INT_MAX);
  return 0;
}