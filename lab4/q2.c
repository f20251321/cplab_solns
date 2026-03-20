#include <stdio.h>

int main() {
  int a, b, c;
  printf("Enter the first number : ");
  scanf("%d", &a);
  printf("Enter the second number : ");
  scanf("%d", &b);
  c = a;
  a = b;
  b = c;
  printf("Value of a = %d, b = %d\n", a, b);
  return 0;
}