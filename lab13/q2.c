#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *fp = fopen("numbers.txt", "r");
  if (!fp) {
    printf("Cannot open numbers.txt\n");
    return 1;
  }

  int n;
  fscanf(fp, "%d", &n);

  int *arr = (int *)malloc(n * sizeof(int));

  for (int i = 0; i < n; i++)
    fscanf(fp, "%d", &arr[i]);

  fclose(fp);

  double sum = 0;
  printf("Numbers:\n");
  for (int i = 0; i < n; i++) {
    printf("%d\n", arr[i]);
    sum += arr[i];
  }

  printf("\nAverage: %.2f\n", sum / n);

  free(arr);
  return 0;
}