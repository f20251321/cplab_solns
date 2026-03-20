#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int arr[], int low, int high) {
  int pivot = arr[high], i = low - 1;
  for (int j = low; j < high; j++) {
    if (arr[j] <= pivot) {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }
  swap(&arr[i + 1], &arr[high]);
  return i + 1;
}

void quickSort(int arr[], int low, int high) {
  if (low < high) {
    int pi = partition(arr, low, high);
    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high);
  }
}

void fun2(int **arr, int rows, int *colSizes) {
  for (int i = 0; i < rows; i++) {
    quickSort(arr[i], 0, colSizes[i] - 1);
  }
}

int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("Usage: %s <rows> <col1> <col2> ...\n", argv[0]);
    return 1;
  }

  int rows = atoi(argv[1]);

  if (argc < rows + 2) {
    printf("Provide column count for each row.\n");
    return 1;
  }

  int *colSizes = (int *)malloc(rows * sizeof(int));
  for (int i = 0; i < rows; i++) {
    colSizes[i] = atoi(argv[2 + i]);
  }

  int **arr = (int **)malloc(rows * sizeof(int *));
  for (int i = 0; i < rows; i++) {
    arr[i] = (int *)malloc(colSizes[i] * sizeof(int));
  }

  for (int i = 0; i < rows; i++) {
    printf("Enter %d elements for row %d:\n", colSizes[i], i + 1);
    for (int j = 0; j < colSizes[i]; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  fun2(arr, rows, colSizes);

  printf("\nSorted 2D array:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < colSizes[i]; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < rows; i++) {
    free(arr[i]);
  }
  free(arr);
  free(colSizes);

  return 0;
}