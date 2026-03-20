#include <stdio.h>

int main() {
  int n, rev, temp;

  printf("Enter a four-digit positive integer: ");
  scanf("%d", &n);

  temp = n;
  rev = 0;
  rev = rev * 10 + temp % 10;
  temp /= 10;
  rev = rev * 10 + temp % 10;
  temp /= 10;
  rev = rev * 10 + temp % 10;
  temp /= 10;
  rev = rev * 10 + temp % 10;

  printf("%d %s be read the same in reverse order\n", n,
         (n == rev) ? "can" : "cannot");

  return 0;
}