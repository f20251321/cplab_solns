#include <stdio.h>

int main() {
  float u, a, t, temp1, temp2, d;

  printf("Enter initial velocity (u): ");
  scanf("%f", &u);
  printf("Enter acceleration (a): ");
  scanf("%f", &a);
  printf("Enter time (t): ");
  scanf("%f", &t);

  temp1 = u * t;
  temp2 = 0.5 * a * t * t;
  d = temp1 + temp2;

  printf("Distance travelled: %.2f\n", d);

  return 0;
}