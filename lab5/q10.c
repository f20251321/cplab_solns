#include <stdio.h>

int main() {
  int n, i, sum = 0;

  printf("Enter n: ");
  scanf("%d", &n);

  if (n >= 0) {
    for (i = n; i <= 2 * n; i++) {
      sum += i;
    }
    printf("Sum from %d to %d = %d\n", n, 2 * n, sum);
  } else {
    for (i = 2 * n; i <= 3 * n; i++) {
      sum += i;
    }
    printf("Sum from %d to %d = %d\n", 2 * n, 3 * n, sum);
  }

  return 0;
}