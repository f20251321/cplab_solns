#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc < 3) {
    printf("Usage: %s <int_count> <float_count>\n", argv[0]);
    return 1;
  }

  int intSize = atoi(argv[1]);
  int floatSize = atoi(argv[2]);

  void **new2D = (void **)malloc(2 * sizeof(void *));

  new2D[0] = (int *)malloc(intSize * sizeof(int));
  new2D[1] = (float *)malloc(floatSize * sizeof(float));

  printf("Enter %d integers:\n", intSize);
  int *intRow = (int *)new2D[0];
  for (int i = 0; i < intSize; i++) {
    scanf("%d", &intRow[i]);
  }

  printf("Enter %d floats:\n", floatSize);
  float *floatRow = (float *)new2D[1];
  for (int i = 0; i < floatSize; i++) {
    scanf("%f", &floatRow[i]);
  }

  printf("\nInteger row: ");
  for (int i = 0; i < intSize; i++) {
    printf("%d ", intRow[i]);
  }

  printf("\nFloat row: ");
  for (int i = 0; i < floatSize; i++) {
    printf("%.2f ", floatRow[i]);
  }
  printf("\n");

  free(new2D[0]);
  free(new2D[1]);
  free(new2D);
  return 0;
}