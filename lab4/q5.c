#include <stdio.h>

int main() {
  float x, result = 1.0;
  int n, i;

  printf("Enter base (x): ");
  scanf("%f", &x);
  printf("Enter power (n): ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    result *= x;
  }

  printf("%.2f ^ %d = %.2f\n", x, n, result);

  return 0;
}