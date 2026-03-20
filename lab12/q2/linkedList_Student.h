#ifndef __LINKED_LIST_STUDENT_H
#define __LINKED_LIST_STUDENT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student_record {
  char ID[20];
  char Name[50];
  char Dept[25];
  int math_marks;
  int phy_marks;
  int chem_marks;
} StudentRecord;

typedef struct snode *SNODE;
struct snode {
  StudentRecord data;
  SNODE next;
};

typedef struct student_list *SLIST;
struct student_list {
  int count;
  SNODE head;
};

void printStudentRecord(SNODE n);
void printList(SLIST l);
SLIST createNewList();
SNODE createNewNode(StudentRecord rec);
void insertNodeAtStart(SNODE n, SLIST l);
void insertNodeAtEnd(SNODE n, SLIST l);
void insertNodeAfterElem(char *id, SNODE n, SLIST l);
void removeNodeAtStart(SLIST l);
void removeNodeAtEnd(SLIST l);
void removeElement(char *id, SLIST l);
SNODE find(SLIST l, char *id);

#endif