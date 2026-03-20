#include <stdio.h>

int main() {
  int Q, score;
  char keys[101], response[101], name[50], cont;

  printf("Enter the number of questions (Q): ");
  scanf("%d", &Q);
  getchar();

  printf("Input key to the quiz:\n");
  printf("Keys = ");
  for (int i = 0; i < Q; i++)
    scanf("%c", &keys[i]);
  getchar();

  do {
    printf("Input the name of the student: ");
    scanf("%s", name);
    getchar();

    printf("Input response of %s:\n", name);
    for (int i = 0; i < Q; i++)
      scanf("%c", &response[i]);
    getchar();

    score = 0;
    for (int i = 0; i < Q; i++) {
      if (response[i] == keys[i])
        score++;
    }

    printf("Marks obtained by %s is = %d out of %d.\n\n", name, score, Q);

    printf("Do you want to evaluate another student (Y/N): ");
    scanf("%c", &cont);
    getchar();
    printf("\n");

  } while (cont == 'Y' || cont == 'y');

  printf("Good Bye!\n");

  return 0;
}