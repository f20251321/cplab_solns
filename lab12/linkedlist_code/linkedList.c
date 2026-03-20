#include "linkedList.h"

void printNode(NODE n1) {
  if (n1 != NULL)
    printf("[%d]\n", n1->ele);
}

void printList(LIST l1) {
  if (l1->count == 0) {
    printf("List is empty\n");
    return;
  }
  NODE curr = l1->head;
  while (curr != NULL) {
    printf("%d -> ", curr->ele);
    curr = curr->next;
  }
  printf("NULL\n");
}

LIST createNewList() {
  LIST l = (LIST)malloc(sizeof(struct linked_list));
  l->count = 0;
  l->head = NULL;
  return l;
}

NODE createNewNode(int value) {
  NODE n = (NODE)malloc(sizeof(struct node));
  n->ele = value;
  n->next = NULL;
  return n;
}

void insertNodeIntoList(NODE n1, LIST l1) {
  n1->next = l1->head;
  l1->head = n1;
  l1->count++;
}

void insertNodeAtEnd(NODE n1, LIST l1) {
  if (l1->head == NULL) {
    l1->head = n1;
  } else {
    NODE curr = l1->head;
    while (curr->next != NULL)
      curr = curr->next;
    curr->next = n1;
  }
  n1->next = NULL;
  l1->count++;
}

NODE search(LIST l1, int value) {
  NODE curr = l1->head;
  while (curr != NULL) {
    if (curr->ele == value)
      return curr;
    curr = curr->next;
  }
  return NULL;
}

void insertAfter(int searchEle, NODE n1, LIST l1) {
  NODE found = search(l1, searchEle);
  if (found == NULL) {
    printf("Element %d not found\n", searchEle);
    return;
  }
  n1->next = found->next;
  found->next = n1;
  l1->count++;
}

void removeFirstNode(LIST l1) {
  if (l1->head == NULL) {
    printf("List is empty\n");
    return;
  }
  NODE temp = l1->head;
  l1->head = temp->next;
  free(temp);
  l1->count--;
}

void removeLastNode(LIST l1) {
  if (l1->head == NULL) {
    printf("List is empty\n");
    return;
  }
  if (l1->head->next == NULL) {
    free(l1->head);
    l1->head = NULL;
    l1->count--;
    return;
  }
  NODE curr = l1->head;
  while (curr->next->next != NULL)
    curr = curr->next;
  free(curr->next);
  curr->next = NULL;
  l1->count--;
}

void removeElem(int value, LIST l1) {
  if (l1->head == NULL) {
    printf("Element %d not found\n", value);
    return;
  }
  if (l1->head->ele == value) {
    NODE temp = l1->head;
    l1->head = temp->next;
    free(temp);
    l1->count--;
    return;
  }
  NODE curr = l1->head;
  while (curr->next != NULL) {
    if (curr->next->ele == value) {
      NODE temp = curr->next;
      curr->next = temp->next;
      free(temp);
      l1->count--;
      return;
    }
    curr = curr->next;
  }
  printf("Element %d not found\n", value);
}