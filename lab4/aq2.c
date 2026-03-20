#include <math.h>
#include <stdio.h>

int main() {
  float x, y, expr1, expr2;
  float pi = 3.142;

  printf("Enter x: ");
  scanf("%f", &x);
  printf("Enter y: ");
  scanf("%f", &y);

  // expr1 = (e^x * sin(60°) + 5.6e-5) / (3 * cos(30°))
  expr1 = (exp(x) * sin(60 * pi / 180) + 5.6e-5) / (3 * cos(30 * pi / 180));

  // expr2 = sin((atan(0.33) + pi) / (2 * y))
  expr2 = sin((atan(0.33) + pi) / (2 * y));

  printf("expr1 = %f\n", expr1);
  printf("expr2 = %f\n", expr2);

  return 0;
}