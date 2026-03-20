#include <stdio.h>

#define MAX 100

struct Employee {
  int ID;
  float salary;
  char division[25];
};

// Quicksort on pointer array by salary
void swap(struct Employee **a, struct Employee **b) {
  struct Employee *t = *a;
  *a = *b;
  *b = t;
}

int partition(struct Employee *arr[], int low, int high) {
  float pivot = arr[high]->salary;
  int i = low - 1;
  for (int j = low; j < high; j++) {
    if (arr[j]->salary <= pivot) {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }
  swap(&arr[i + 1], &arr[high]);
  return i + 1;
}

void sort(struct Employee *employeeDB[], int low, int high) {
  if (low < high) {
    int pi = partition(employeeDB, low, high);
    sort(employeeDB, low, pi - 1);
    sort(employeeDB, pi + 1, high);
  }
}

int main() {
  int n;

  printf("Enter number of employees: ");
  scanf("%d", &n);

  struct Employee employeeData[MAX];
  struct Employee *employeeDataPointers[MAX];

  for (int i = 0; i < n; i++) {
    printf("\nEmployee %d:\n", i + 1);
    printf("ID: ");
    scanf("%d", &employeeData[i].ID);
    printf("Salary: ");
    scanf("%f", &employeeData[i].salary);
    printf("Division: ");
    scanf("%s", employeeData[i].division);

    // Initialize pointer array
    employeeDataPointers[i] = &employeeData[i];
  }

  // Sort pointer array by salary
  sort(employeeDataPointers, 0, n - 1);

  // Print sorted (by pointer order, original array untouched)
  printf("\nEmployees sorted by salary (ascending)\n");
  for (int i = 0; i < n; i++) {
    printf("ID: %d | Salary: %.2f | Division: %s\n",
           employeeDataPointers[i]->ID, employeeDataPointers[i]->salary,
           employeeDataPointers[i]->division);
  }

  return 0;
}