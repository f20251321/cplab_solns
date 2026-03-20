#include "linkedList_Student.h"

void printStudentRecord(SNODE n) {
  if (n == NULL)
    return;
  printf("ID: %s | Name: %s | Dept: %s | Math: %d | Phy: %d | Chem: %d\n",
         n->data.ID, n->data.Name, n->data.Dept, n->data.math_marks,
         n->data.phy_marks, n->data.chem_marks);
}

void printList(SLIST l) {
  if (l->count == 0) {
    printf("List is empty\n");
    return;
  }
  SNODE curr = l->head;
  while (curr != NULL) {
    printStudentRecord(curr);
    curr = curr->next;
  }
  printf("%d record(s)\n", l->count);
}

SLIST createNewList() {
  SLIST l = (SLIST)malloc(sizeof(struct student_list));
  l->count = 0;
  l->head = NULL;
  return l;
}

SNODE createNewNode(StudentRecord rec) {
  SNODE n = (SNODE)malloc(sizeof(struct snode));
  n->data = rec;
  n->next = NULL;
  return n;
}

void insertNodeAtStart(SNODE n, SLIST l) {
  n->next = l->head;
  l->head = n;
  l->count++;
}

void insertNodeAtEnd(SNODE n, SLIST l) {
  if (l->head == NULL) {
    l->head = n;
  } else {
    SNODE curr = l->head;
    while (curr->next != NULL)
      curr = curr->next;
    curr->next = n;
  }
  n->next = NULL;
  l->count++;
}

SNODE find(SLIST l, char *id) {
  SNODE curr = l->head;
  while (curr != NULL) {
    if (strcmp(curr->data.ID, id) == 0)
      return curr;
    curr = curr->next;
  }
  return NULL;
}

void insertNodeAfterElem(char *id, SNODE n, SLIST l) {
  SNODE found = find(l, id);
  if (found == NULL) {
    printf("Student with ID %s not found\n", id);
    return;
  }
  n->next = found->next;
  found->next = n;
  l->count++;
}

void removeNodeAtStart(SLIST l) {
  if (l->head == NULL) {
    printf("List is empty\n");
    return;
  }
  SNODE temp = l->head;
  l->head = temp->next;
  free(temp);
  l->count--;
}

void removeNodeAtEnd(SLIST l) {
  if (l->head == NULL) {
    printf("List is empty\n");
    return;
  }
  if (l->head->next == NULL) {
    free(l->head);
    l->head = NULL;
    l->count--;
    return;
  }
  SNODE curr = l->head;
  while (curr->next->next != NULL)
    curr = curr->next;
  free(curr->next);
  curr->next = NULL;
  l->count--;
}

void removeElement(char *id, SLIST l) {
  if (l->head == NULL) {
    printf("Student with ID %s not found\n", id);
    return;
  }
  if (strcmp(l->head->data.ID, id) == 0) {
    SNODE temp = l->head;
    l->head = temp->next;
    free(temp);
    l->count--;
    return;
  }
  SNODE curr = l->head;
  while (curr->next != NULL) {
    if (strcmp(curr->next->data.ID, id) == 0) {
      SNODE temp = curr->next;
      curr->next = temp->next;
      free(temp);
      l->count--;
      return;
    }
    curr = curr->next;
  }
  printf("Student with ID %s not found\n", id);
}