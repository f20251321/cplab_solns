#include <stdio.h>

int main() {
  float f;
  printf("Sizeof (char) = %lu bytes\n", sizeof(char));
  printf("Sizeof (short)= %lubytes\n", sizeof(short));
  printf("Sizeof (int)= %lu bytes\n", sizeof(int));
  printf("Sizeof (long)= %lu bytes\n", sizeof(long));
  printf("Sizeof (float)= %lu bytes\n", sizeof(f));
  printf("Sizeof (double)= %lu bytes\n", sizeof(double));
  printf("Sizeof (1.55)= %lu bytes\n", sizeof(1.55));
  printf("Sizeof (1.55L)= %lu bytes\n", sizeof(1.55L));
  printf("Sizeof (str)= %lu bytes\n", sizeof("Hello"));
  return 0;
}
