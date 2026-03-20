#include <stdio.h>

long long decToBin(int n) {
  long long bin = 0, place = 1;
  while (n > 0) {
    bin += (n % 2) * place;
    n /= 2;
    place *= 10;
  }
  return bin;
}

int main() {
  int n;

  printf("Enter a decimal number: ");
  scanf("%d", &n);

  printf("Binary: %lld\n", decToBin(n));

  return 0;
}