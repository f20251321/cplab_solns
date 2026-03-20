#include "reverseArray.h"
#include <stdio.h>

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

int main() {
  int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8};
  int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8};
  int size = 8;

  printf("Original: ");
  printArray(arr1, size);

  reverseArray_PassByReference(arr1, size);
  printf("Reversed (by reference): ");
  printArray(arr1, size);

  reverseArray_PassByPointers(arr2, size);
  printf("Reversed (by pointers): ");
  printArray(arr2, size);

  return 0;
}