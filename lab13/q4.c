#include <ctype.h>
#include <stdio.h>

void convertLowerASCII(char str[]) {
  for (int i = 0; str[i]; i++) {
    if (str[i] >= 'A' && str[i] <= 'Z') {
      str[i] += 32;
    }
  }
}

void convertLowerLib(char str[]) {
  for (int i = 0; str[i]; i++) {
    str[i] = tolower(str[i]);
  }
}

int main() {
  char s1[100], s2[100];

  printf("Enter a string: ");
  fgets(s1, 100, stdin);

  for (int i = 0; s1[i]; i++) {
    s2[i] = s1[i];
  }
  s2[99] = '\0';

  convertLowerASCII(s1);
  printf("ASCII method: %s", s1);

  convertLowerLib(s2);
  printf("tolower method: %s", s2);

  return 0;
}