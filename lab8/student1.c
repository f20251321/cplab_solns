#include "answer.h"

int answer(int questionNo) {
  switch (questionNo) {
  case 1:
    return 15;
  case 2:
    return 10;
  case 3:
    return 2;
  case 4:
    return 4;
  default:
    return -1;
  }
}