#ifndef STUDENT_H
#define STUDENT_H

typedef struct student {
  int ID;
  char Name[25];
  int Marks[5];
  float Avg;
} Student;

void inputStudent(Student *s);
void calcAverage(Student *s);
void displayStudent(Student *s);

#endif