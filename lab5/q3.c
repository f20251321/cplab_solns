#include <stdio.h>

int main() {
  int a, b, c, d;
  int maxSum, p1, p2;

  printf("Enter four integers: ");
  scanf("%d %d %d %d", &a, &b, &c, &d);

  maxSum = a + b;
  p1 = a;
  p2 = b;

  if (a + c > maxSum) {
    maxSum = a + c;
    p1 = a;
    p2 = c;
  }
  if (a + d > maxSum) {
    maxSum = a + d;
    p1 = a;
    p2 = d;
  }
  if (b + c > maxSum) {
    maxSum = b + c;
    p1 = b;
    p2 = c;
  }
  if (b + d > maxSum) {
    maxSum = b + d;
    p1 = b;
    p2 = d;
  }
  if (c + d > maxSum) {
    maxSum = c + d;
    p1 = c;
    p2 = d;
  }

  printf("%d + %d = %d\n", p1, p2, maxSum);

  return 0;
}