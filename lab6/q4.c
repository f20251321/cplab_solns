#include <stdio.h>

void compute(float n) {
  printf("Square: %.2f\n", n * n);
  printf("Cube: %.2f\n", n * n * n);
  printf("Area of circle (radius=%.2f): %.2f\n", n, 3.14159 * n * n);
}

int main() {
  float n;

  printf("Enter n: ");
  scanf("%f", &n);

  compute(n);

  return 0;
}