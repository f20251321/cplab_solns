#include <ctype.h>
#include <stdio.h>

void countVC(char *str) {
  int vowels = 0, consonants = 0;

  while (*str) {
    char c = tolower(*str);
    if (c >= 'a' && c <= 'z') {
      if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        vowels++;
      else
        consonants++;
    }
    str++;
  }

  printf("Vowels: %d\n", vowels);
  printf("Consonants: %d\n", consonants);
}

int main() {
  char str[500];

  printf("Enter a string: ");
  fgets(str, 500, stdin);

  countVC(str);

  return 0;
}