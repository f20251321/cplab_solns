#include <math.h>
#include <stdio.h>

int main() {
  float P, R, A, CI;
  int t;

  printf("Enter Principal (P): ");
  scanf("%f", &P);
  printf("Enter Rate (R): ");
  scanf("%f", &R);
  printf("Enter Time in years (t): ");
  scanf("%d", &t);

  A = P * pow(1 + R / 100, t);
  CI = A - P;

  printf("Final Amount (A): %.2f\n", A);
  printf("Compound Interest (CI): %.2f\n", CI);

  return 0;
}