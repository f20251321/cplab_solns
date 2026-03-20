#include <math.h>
#include <stdio.h>

int countDigits(int n) {
  int count = 0;
  while (n) {
    count++;
    n /= 10;
  }
  return count;
}

int IsArmstrong(int n) {
  int digits = countDigits(n);
  int temp = n, sum = 0;
  while (temp) {
    int d = temp % 10;
    sum += (int)pow(d, digits);
    temp /= 10;
  }
  return sum == n;
}

int main() {
  int low, high;

  printf("Enter two numbers (range): ");
  scanf("%d %d", &low, &high);

  printf("Armstrong numbers between %d and %d:\n", low, high);
  for (int i = low; i <= high; i++) {
    if (IsArmstrong(i))
      printf("%d\n", i);
  }

  return 0;
}