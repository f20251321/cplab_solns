#include <stdio.h>

int myCompare(char a[], char b[]) {
  int i = 0;
  while (a[i] && b[i]) {
    if (a[i] < b[i])
      return -1;
    if (a[i] > b[i])
      return 1;
    i++;
  }
  if (a[i])
    return 1;
  if (b[i])
    return -1;
  return 0;
}

int myCopy(char dest[], int pos, char src[]) {
  int i = 0;
  while (src[i]) {
    dest[pos++] = src[i++];
  }
  return pos;
}

int main() {
  char S1[100], S2[100], S3[200];

  printf("Enter S1: ");
  scanf("%s", S1);
  printf("Enter S2: ");
  scanf("%s", S2);

  int cmp = myCompare(S1, S2);
  int pos = 0;

  if (cmp == 0) {
    pos = myCopy(S3, pos, S1);
  } else if (cmp < 0) {
    pos = myCopy(S3, pos, S1);
    S3[pos++] = ' ';
    pos = myCopy(S3, pos, S2);
  } else {
    pos = myCopy(S3, pos, S2);
    S3[pos++] = ' ';
    pos = myCopy(S3, pos, S1);
  }
  S3[pos] = '\0';

  printf("S3 = %s\n", S3);

  return 0;
}