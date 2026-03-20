#include <stdio.h>

int linearSearch(int arr[], int n, int x) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == x)
      return i;
  }
  return -1;
}

int binarySearch(int arr[], int n, int x) {
  int low = 0, high = n - 1;
  while (low <= high) {
    int mid = (low + high) / 2;
    if (arr[mid] == x)
      return mid;
    else if (arr[mid] < x)
      low = mid + 1;
    else
      high = mid - 1;
  }
  return -1;
}

void selectionSortDec(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int maxIdx = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] > arr[maxIdx])
        maxIdx = j;
    }
    int temp = arr[i];
    arr[i] = arr[maxIdx];
    arr[maxIdx] = temp;
  }
}

int main() {
  int choice;

  while (1) {
    printf("\nEnter 1 for Linear Search, 2 for Binary Search, 3 for Selection "
           "Sort, 4 to exit: ");
    scanf("%d", &choice);

    if (choice == 4) {
      printf("Bye Bye SearchNSort!\n");
      break;
    }

    if (choice == 1 || choice == 2) {
      int arr[10], x, pos;

      printf("Enter 10 integer elements:\n");
      for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

      printf("Enter element to search: ");
      scanf("%d", &x);

      if (choice == 1)
        pos = linearSearch(arr, 10, x);
      else
        pos = binarySearch(arr, 10, x);

      if (pos != -1)
        printf("Element found at %d location\n", pos);
      else
        printf("Element not found\n");

    } else if (choice == 3) {
      int arr[10];

      printf("Enter 10 integer elements:\n");
      for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

      selectionSortDec(arr, 10);

      printf("Decreasing order: ");
      for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);
      printf("\n");

      printf("Ascending order: ");
      for (int i = 9; i >= 0; i--)
        printf("%d ", arr[i]);
      printf("\n");

    } else {
      printf("Invalid choice\n");
    }
  }

  return 0;
}