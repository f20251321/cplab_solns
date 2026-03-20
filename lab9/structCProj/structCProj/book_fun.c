#include "book_def.h"

BOOK newBook(int ID, SHELF shelfNum, float price) {
  // implement this function as per specification in books_def.h
  BOOK book1;
  book1.ID = ID;
  book1.shelfNum = shelfNum;
  book1.price = price;
  return book1;
}

void printBook(BOOK book1) {
  // implement this function as per specification in books_def.h
  printf("Printing the details of the Book:\n");
  printf("Book ID is: %d \n", book1.ID);
  printf("Book shelfNum is: %d \n", book1.shelfNum);
  printf("Book price is: %f \n", book1.price);
  return;
}