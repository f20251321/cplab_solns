#include <ctype.h>
#include <stdio.h>

void countChars(char str[]) {
  int vowels = 0, consonants = 0, digits = 0, symbols = 0;

  for (int i = 0; str[i]; i++) {
    char c = tolower(str[i]);
    if (c >= 'a' && c <= 'z') {
      if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        vowels++;
      else
        consonants++;
    } else if (c >= '0' && c <= '9') {
      digits++;
    } else if (c != '\n') {
      symbols++;
    }
  }

  printf("Vowels: %d\n", vowels);
  printf("Consonants: %d\n", consonants);
  printf("Digits: %d\n", digits);
  printf("Other symbols: %d\n", symbols);
}

int main() {
  char line[500];

  printf("(a) Enter a line of text (fgets): ");
  fgets(line, 500, stdin);
  countChars(line);

  printf("\n(b) Enter a line of text (scanf): ");
  scanf(" %[^\n]", line);
  countChars(line);

  return 0;
}