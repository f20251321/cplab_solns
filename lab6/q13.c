#include <stdio.h>

int leadingDigit(int n) {
  while (n >= 10)
    n /= 10;
  return n;
}

int main() {
  int n;

  printf("Enter a positive integer: ");
  scanf("%d", &n);

  printf("Leading digit: %d\n", leadingDigit(n));

  return 0;
}