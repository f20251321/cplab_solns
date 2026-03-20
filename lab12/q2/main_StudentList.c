#include "linkedList_Student.h"

StudentRecord makeRecord(char *id, char *name, char *dept, int m, int p,
                         int c) {
  StudentRecord r;
  strcpy(r.ID, id);
  strcpy(r.Name, name);
  strcpy(r.Dept, dept);
  r.math_marks = m;
  r.phy_marks = p;
  r.chem_marks = c;
  return r;
}

int main() {
  SLIST list = createNewList();

  SNODE s1 = createNewNode(makeRecord("101", "Alice", "CS", 90, 85, 88));
  SNODE s2 = createNewNode(makeRecord("102", "Bob", "ECE", 75, 80, 70));
  SNODE s3 = createNewNode(makeRecord("103", "Charlie", "ME", 88, 92, 85));
  SNODE s4 = createNewNode(makeRecord("104", "Diana", "CS", 95, 90, 93));

  printf("Insert at start\n");
  insertNodeAtStart(s1, list);
  printList(list);

  printf("\nInsert at end\n");
  insertNodeAtEnd(s2, list);
  printList(list);

  printf("\nInsert at start\n");
  insertNodeAtStart(s3, list);
  printList(list);

  printf("\nInsert after ID 101\n");
  insertNodeAfterElem("101", s4, list);
  printList(list);

  printf("\nFind ID 102\n");
  SNODE found = find(list, "102");
  if (found)
    printStudentRecord(found);
  else
    printf("Not found\n");

  printf("\nFind ID 999\n");
  found = find(list, "999");
  if (found)
    printStudentRecord(found);
  else
    printf("Not found\n");

  printf("\nRemove element ID 104\n");
  removeElement("104", list);
  printList(list);

  printf("\nRemove first\n");
  removeNodeAtStart(list);
  printList(list);

  printf("\nRemove last\n");
  removeNodeAtEnd(list);
  printList(list);

  printf("\nRemove element ID 101\n");
  removeElement("101", list);
  printList(list);

  printf("\nRemove from empty\n");
  removeElement("101", list);
  printList(list);

  free(list);
  return 0;
}