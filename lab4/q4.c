#include <stdio.h>

int main() {
  char a, b;

  printf("Enter two characters: ");
  scanf("%c %c", &a, &b);

  printf("Sum of ASCII values: %d\n", (int)a + (int)b);

  return 0;
}