#include <stdio.h>

// O(n)
int fibIterative(int n) {
  if (n <= 1)
    return n;
  int a = 0, b = 1, c;
  for (int i = 2; i <= n; i++) {
    c = a + b;
    a = b;
    b = c;
  }
  return b;
}

// O(2^n)
int fibRecursive(int n) {
  if (n <= 1)
    return n;
  return fibRecursive(n - 1) + fibRecursive(n - 2);
}

int main() {
  int n;

  printf("Enter n: ");
  scanf("%d", &n);

  printf("Fibonacci(%d) iterative: %d\n", n, fibIterative(n));
  printf("Fibonacci(%d) recursive: %d\n", n, fibRecursive(n));

  return 0;
}