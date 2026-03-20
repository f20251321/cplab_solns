#include <stdio.h>

int myStrLen(char s[]) {
  int len = 0;
  while (s[len] && s[len] != '\n')
    len++;
  return len;
}

int matchAt(char sen[], int i, char word[], int wLen, int sLen) {
  for (int j = 0; j < wLen; j++) {
    if (i + j >= sLen || sen[i + j] != word[j])
      return 0;
  }
  if (i > 0 && sen[i - 1] != ' ')
    return 0;
  if (i + wLen < sLen && sen[i + wLen] != ' ' && sen[i + wLen] != '\n' &&
      sen[i + wLen] != '\0')
    return 0;
  return 1;
}

int main() {
  char sen[1000], word[100], result[1000];
  int r = 0, count = 0;

  scanf("%[^\n]", sen);
  getchar();
  scanf("%s", word);

  int sLen = myStrLen(sen);
  int wLen = myStrLen(word);

  int i = 0;
  while (i < sLen) {
    if (matchAt(sen, i, word, wLen, sLen)) {
      count++;
      i += wLen;
      if (i < sLen && sen[i] == ' ')
        i++;
    } else {
      result[r++] = sen[i++];
    }
  }
  if (r > 0 && result[r - 1] == ' ')
    r--;
  result[r] = '\0';

  printf("No. of occurrences of %s is %d\n", word, count);
  printf("output string is: %s\n", result);

  return 0;
}