#include <float.h>
#include <stdio.h>

int main() {
  float arr[10];
  float max1 = -FLT_MAX, max2 = -FLT_MAX;
  float min1 = FLT_MAX, min2 = FLT_MAX;

  printf("Enter 10 floating point numbers:\n");
  for (int i = 0; i < 10; i++)
    scanf("%f", &arr[i]);

  for (int i = 0; i < 10; i++) {
    if (arr[i] > max1) {
      max2 = max1;
      max1 = arr[i];
    } else if (arr[i] > max2) {
      max2 = arr[i];
    }

    if (arr[i] < min1) {
      min2 = min1;
      min1 = arr[i];
    } else if (arr[i] < min2) {
      min2 = arr[i];
    }
  }

  printf("Maximum: %.2f\n", max1);
  printf("Second Maximum: %.2f\n", max2);
  printf("Minimum: %.2f\n", min1);
  printf("Second Minimum: %.2f\n", min2);
  printf("Average of these four: %.2f\n", (max1 + max2 + min1 + min2) / 4.0);

  return 0;
}