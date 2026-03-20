#include "student.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;

  printf("Enter number of students: ");
  scanf("%d", &n);

  Student *students = (Student *)malloc(n * sizeof(Student));

  for (int i = 0; i < n; i++) {
    printf("\nStudent %d\n", i + 1);
    inputStudent(&students[i]);
    calcAverage(&students[i]);
  }

  printf("\nStudent Records\n");
  for (int i = 0; i < n; i++)
    displayStudent(&students[i]);

  free(students);

  return 0;
}