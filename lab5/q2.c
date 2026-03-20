#include <stdio.h>

int main() {
  int age;

  printf("Enter your age: ");
  scanf("%d", &age);

  printf("%s\n", (age >= 18) ? "You can vote" : "You cannot vote");

  return 0;
}