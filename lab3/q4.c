#include <stdio.h>

int main() {
  int num1, num2, num3;
  printf("Please enter the first number: ");
  scanf("%d", &num1);
  printf("Please enter the second number: ");
  scanf("%d", &num2);
  num3 = num1 + num2;
  printf("The sum is: %d \n", num3);
  return 0;
}