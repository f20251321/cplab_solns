#include <stdio.h>

int main() {
  int total, years, months, days;

  printf("Enter number of days: ");
  scanf("%d", &total);

  years = total / 360;
  months = (total % 360) / 30;
  days = total % 30;

  printf("%d year(s), %d month(s), %d day(s)\n", years, months, days);

  return 0;
}