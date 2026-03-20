#include <stdio.h>

int main() {
  int a, b;
  printf("Enter the first number : ");
  scanf("%d", &a);
  printf("Enter the second number : ");
  scanf("%d", &b);
  a = a + b;
  b = a - b;
  a = b - a;
  printf("Value of a = %d, b = %d\n", a, b);
  return 0;
}