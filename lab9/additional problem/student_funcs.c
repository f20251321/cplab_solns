#include "student.h"
#include <stdio.h>

void inputStudent(Student *s) {
  printf("Enter ID: ");
  scanf("%d", &s->ID);
  printf("Enter Name: ");
  scanf("%s", s->Name);
  printf("Enter marks in 5 courses: ");
  for (int i = 0; i < 5; i++)
    scanf("%d", &s->Marks[i]);
}

void calcAverage(Student *s) {
  int sum = 0;
  for (int i = 0; i < 5; i++)
    sum += s->Marks[i];
  s->Avg = sum / 5.0;
}

void displayStudent(Student *s) {
  printf("ID: %d | Name: %s | Marks: ", s->ID, s->Name);
  for (int i = 0; i < 5; i++)
    printf("%d ", s->Marks[i]);
  printf("| Avg: %.2f\n", s->Avg);
}