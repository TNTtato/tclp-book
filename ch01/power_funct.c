#include <stdio.h>

int power(int base, int exp);

int main() {
  for (int i = 1; i <= 10; i++) {
    printf("%d, %d, %d\n", i, power(2, i), power(3, i));
  }
}

int power(int base, int exp) {
  int result = 1;

  for (int i = 1; i <= exp; i ++) {
    result = result * base;
  }

  return result;
}

