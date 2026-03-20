#include "books_catalog.h"

BOOK booksCatalog[MAX_SIZE];
int count;

void addBookToCatalog(BOOK book1) {
  // implement this function as per specification in books_catalog.h
  booksCatalog[count] = book1;
  count++;
  return;
}

void printBookCatalog() {
  // implement this function as per specification in books_catalog.h
  for (int i = 0; i < count; i++) {
    printf("Book %d is:\n", i + 1);
    printBook(booksCatalog[i]);
  }
  return;
}

void sortBookCatalogOnID() {
  // implement this function as per specification in books_catalog.h
  BOOK temp;
  for (int i = 0; i < count; i++) {
    for (int j = 0; j < count - i - 1; j++) {
      if (booksCatalog[j].ID > booksCatalog[j + 1].ID) {
        temp = booksCatalog[j];
        booksCatalog[j] = booksCatalog[j + 1];
        booksCatalog[j + 1] = temp;
      }
    }
  }

  return;
}