#include <math.h>
#include <stdio.h>

int main() {
  float a, b, c, disc, x1, x2;

  printf("Enter a, b, c: ");
  scanf("%f %f %f", &a, &b, &c);

  disc = b * b - 4 * a * c;
  x1 = (-b + sqrt(disc)) / (2 * a);
  x2 = (-b - sqrt(disc)) / (2 * a);

  printf("x1 = %.2f\n", x1);
  printf("x2 = %.2f\n", x2);

  return 0;
}