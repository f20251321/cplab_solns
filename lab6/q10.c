#include <stdio.h>

int checkPrime(int n) {
  if (n <= 1)
    return 0;
  if (n <= 3)
    return 1;
  if (n % 2 == 0 || n % 3 == 0)
    return 0;
  for (int i = 5; i * i <= n; i += 6) {
    if (n % i == 0 || n % (i + 2) == 0)
      return 0;
  }
  return 1;
}

int main() {
  int n, found = 0;

  printf("Enter a positive integer: ");
  scanf("%d", &n);

  for (int i = 2; i <= n / 2; i++) {
    if (checkPrime(i) && checkPrime(n - i)) {
      printf("%d = %d + %d\n", n, i, n - i);
      found = 1;
    }
  }

  if (!found)
    printf("%d cannot be expressed as sum of two primes\n", n);

  return 0;
}