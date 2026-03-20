#include <stdio.h>

int main() {
  float P, T, R, SI;

  printf("Enter Principal (P): ");
  scanf("%f", &P);
  printf("Enter Time (T): ");
  scanf("%f", &T);
  printf("Enter Rate of Interest (R): ");
  scanf("%f", &R);

  SI = P * R * T;

  printf("Simple Interest (SI): %.2f\n", SI);

  return 0;
}