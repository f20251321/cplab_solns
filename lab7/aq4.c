#include <stdio.h>

int main() {
  int N;

  printf("Enter Number of elements: ");
  scanf("%d", &N);

  int a[N], visited[N];
  printf("Enter the elements: ");
  for (int i = 0; i < N; i++) {
    scanf("%d", &a[i]);
    visited[i] = 0;
  }

  for (int i = 0; i < N; i++) {
    if (visited[i])
      continue;

    int count = 1;
    for (int j = i + 1; j < N; j++) {
      if (a[j] == a[i]) {
        count++;
        visited[j] = 1;
      }
    }
    printf("%d occurs %d times\n", a[i], count);
  }

  return 0;
}