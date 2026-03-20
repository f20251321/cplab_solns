#include <stdio.h>

int main() {
  int num_sold;
  float price, bonus, commission, gross;
  float base = 1500.00;

  printf("Enter number of computers sold: ");
  scanf("%d", &num_sold);
  printf("Enter sale price of a computer: ");
  scanf("%f", &price);

  bonus = num_sold * 200.00;
  commission = 0.02 * num_sold * price;
  gross = base + bonus + commission;

  printf("Bonus: %.2f\n", bonus);
  printf("Commission: %.2f\n", commission);
  printf("Gross Salary: %.2f\n", gross);

  return 0;
}