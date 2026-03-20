#include <stdio.h>
#include <stdlib.h>

void fun1(int *arr, int size) {
  int temp = arr[0];
  arr[0] = arr[size - 1];
  arr[size - 1] = temp;
}

void printArr(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main() {
  int staticArr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  printf("Static - Before: ");
  printArr(staticArr, 10);
  fun1(staticArr, 10);
  printf("Static - After:  ");
  printArr(staticArr, 10);

  int *dynArr = (int *)malloc(10 * sizeof(int));
  for (int i = 0; i < 10; i++) {
    dynArr[i] = i + 1;
  }
  printf("\nDynamic - Before: ");
  printArr(dynArr, 10);
  fun1(dynArr, 10);
  printf("Dynamic - After:  ");
  printArr(dynArr, 10);

  free(dynArr);
  return 0;
}