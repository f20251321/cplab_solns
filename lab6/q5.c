#include <stdio.h>

// Iterative
double sumSeriesIterative(int n) {
  double sum = 0.0, fact = 1.0;
  for (int i = 1; i <= n; i++) {
    fact *= i;
    sum += fact / i;
  }
  return sum;
}

// Recursive
double factHelper(int n) {
  if (n <= 1)
    return 1.0;
  return n * factHelper(n - 1);
}

double sumSeriesRecursive(int n) {
  if (n == 1)
    return 1.0;
  return sumSeriesRecursive(n - 1) + factHelper(n) / n;
}

int main() {
  int n;

  printf("Enter n: ");
  scanf("%d", &n);

  printf("Sum (iterative): %.2f\n", sumSeriesIterative(n));
  printf("Sum (recursive): %.2f\n", sumSeriesRecursive(n));

  return 0;
}