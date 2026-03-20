#include <stdio.h>

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int a[], int low, int high) {
  int pivot = a[high], i = low - 1;
  for (int j = low; j < high; j++) {
    if (a[j] <= pivot) {
      i++;
      swap(&a[i], &a[j]);
    }
  }
  swap(&a[i + 1], &a[high]);
  return i + 1;
}

void quickSort(int a[], int low, int high) {
  if (low < high) {
    int pi = partition(a, low, high);
    quickSort(a, low, pi - 1);
    quickSort(a, pi + 1, high);
  }
}

int main() {
  int N;

  printf("Enter size of array: ");
  scanf("%d", &N);

  int a[N];
  printf("Enter elements:\n");
  for (int i = 0; i < N; i++)
    scanf("%d", &a[i]);

  // Mean - O(n)
  float sum = 0;
  for (int i = 0; i < N; i++)
    sum += a[i];
  float mean = sum / N;

  // For median
  quickSort(a, 0, N - 1);

  float median;
  if (N % 2 == 1)
    median = a[N / 2];
  else
    median = (a[N / 2 - 1] + a[N / 2]) / 2.0;

  printf("Mean: %.2f\n", mean);
  printf("Median: %.2f\n", median);

  return 0;
}