#include "reverseArray.h"

void reverseArray_PassByPointers(int *arr, int size) {
  int *left = arr, *right = arr + size - 1;
  while (left < right) {
    int temp = *left;
    *left = *right;
    *right = temp;
    left++;
    right--;
  }
}