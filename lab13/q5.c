#include <stdio.h>
#include <string.h>

// without string functions

int myStrLen(char s[]) {
  int len = 0;
  while (s[len])
    len++;
  return len;
}

int matchAt(char sen[], int i, char word[], int wLen) {
  for (int j = 0; j < wLen; j++) {
    if (sen[i + j] != word[j])
      return 0;
  }
  if (i > 0 && sen[i - 1] != ' ')
    return 0;
  if (sen[i + wLen] != '\0' && sen[i + wLen] != ' ' && sen[i + wLen] != '\n')
    return 0;
  return 1;
}

void findAndRemoveManual(char sen[], char word[]) {
  int sLen = myStrLen(sen), wLen = myStrLen(word);
  int count = 0;
  char result[1000];
  int r = 0;

  if (sLen > 0 && sen[sLen - 1] == '\n') {
    sen[--sLen] = '\0';
  }
  if (wLen > 0 && word[wLen - 1] == '\n') {
    word[--wLen] = '\0';
  }

  int i = 0;
  while (i < sLen) {
    if (matchAt(sen, i, word, wLen)) {
      count++;
      i += wLen;
      if (sen[i] == ' ')
        i++;
    } else {
      result[r++] = sen[i++];
    }
  }
  if (r > 0 && result[r - 1] == ' ')
    r--;
  result[r] = '\0';

  printf("[Without string funcs]\n");
  printf("No. of occurrences of %s is %d\n", word, count);
  printf("output string is: %s\n", result);
}

// with string functions

void findAndRemoveLib(char sen[], char word[]) {
  int wLen = strlen(word), count = 0;
  char result[1000] = "", temp[1000];
  int r = 0;

  if (sen[strlen(sen) - 1] == '\n')
    sen[strlen(sen) - 1] = '\0';
  if (word[strlen(word) - 1] == '\n')
    word[strlen(word) - 1] = '\0';

  strcpy(temp, sen);
  char *tok = strtok(temp, " ");
  while (tok) {
    if (strcmp(tok, word) == 0) {
      count++;
    } else {
      if (r > 0) {
        result[r++] = ' ';
      }
      strcpy(&result[r], tok);
      r += strlen(tok);
    }
    tok = strtok(NULL, " ");
  }
  result[r] = '\0';

  printf("[With string funcs]\n");
  printf("No. of occurrences of %s is %d\n", word, count);
  printf("output string is: %s\n", result);
}

int main() {
  char sen1[1000], sen2[1000], word1[100], word2[100];

  printf("Enter sentence: ");
  fgets(sen1, 1000, stdin);
  printf("Enter word: ");
  fgets(word1, 100, stdin);

  for (int i = 0; sen1[i]; i++) {
    sen2[i] = sen1[i];
  }
  sen2[myStrLen(sen1)] = '\0';
  for (int i = 0; word1[i]; i++) {
    word2[i] = word1[i];
  }
  word2[myStrLen(word1)] = '\0';

  findAndRemoveManual(sen1, word1);
  printf("\n");
  findAndRemoveLib(sen2, word2);

  return 0;
}