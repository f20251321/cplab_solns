#include "answer.h"
#include <stdio.h>

int main() {
  int correct[] = {5, 10, 0, 4};
  int score = 0;

  for (int i = 0; i < 4; i++) {
    if (answer(i + 1) == correct[i])
      score++;
  }

  printf("Score: %d out of 4\n", score);

  return 0;
}