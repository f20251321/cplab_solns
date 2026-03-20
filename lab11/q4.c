#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char ID[20];
  char Name[50];
  char Dept[25];
  int math_marks;
  int phy_marks;
  int chem_marks;
} Student;

void swap(Student *a, Student *b) {
  Student t = *a;
  *a = *b;
  *b = t;
}

int partition(Student arr[], int low, int high) {
  int pivot = arr[high].math_marks;
  int i = low - 1;
  for (int j = low; j < high; j++) {
    if (arr[j].math_marks <= pivot) {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }
  swap(&arr[i + 1], &arr[high]);
  return i + 1;
}

Student *fun3(Student arr[], int size) {
  if (size <= 1)
    return arr;

  int stack[size];
  int top = -1;
  stack[++top] = 0;
  stack[++top] = size - 1;

  while (top >= 0) {
    int high = stack[top--];
    int low = stack[top--];
    int pi = partition(arr, low, high);
    if (pi - 1 > low) {
      stack[++top] = low;
      stack[++top] = pi - 1;
    }
    if (pi + 1 < high) {
      stack[++top] = pi + 1;
      stack[++top] = high;
    }
  }

  return arr;
}

int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("Usage: %s <number_of_students>\n", argv[0]);
    return 1;
  }

  int n = atoi(argv[1]);
  Student *students = (Student *)malloc(n * sizeof(Student));

  for (int i = 0; i < n; i++) {
    printf("\nStudent %d:\n", i + 1);
    printf("ID: ");
    scanf("%s", students[i].ID);
    printf("Name: ");
    scanf("%s", students[i].Name);
    printf("Dept: ");
    scanf("%s", students[i].Dept);
    printf("Math marks: ");
    scanf("%d", &students[i].math_marks);
    printf("Physics marks: ");
    scanf("%d", &students[i].phy_marks);
    printf("Chemistry marks: ");
    scanf("%d", &students[i].chem_marks);
  }

  Student *sorted = fun3(students, n);

  printf("\n===== Students sorted by Math marks =====\n");
  for (int i = 0; i < n; i++) {
    printf("ID: %s | Name: %s | Dept: %s | Math: %d | Phy: %d | Chem: %d\n",
           sorted[i].ID, sorted[i].Name, sorted[i].Dept, sorted[i].math_marks,
           sorted[i].phy_marks, sorted[i].chem_marks);
  }

  free(students);
  return 0;
}