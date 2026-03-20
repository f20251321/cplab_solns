#include <stdio.h>

int main() {
  int option;
  float temp;

  printf("Option-1: Celsius to Fahrenheit\n");
  printf("Option-2: Fahrenheit to Celsius\n");
  printf("Option-3: Quit\n");
  printf("Enter option: ");
  scanf("%d", &option);

  switch (option) {
  case 1:
    do {
      printf("Enter temperature in Celsius (> -273.15): ");
      scanf("%f", &temp);
    } while (temp <= -273.15);
    printf("%.2f C = %.2f F\n", temp, (temp * 9.0 / 5.0) + 32);
    break;
  case 2:
    do {
      printf("Enter temperature in Fahrenheit (> -459.67): ");
      scanf("%f", &temp);
    } while (temp <= -459.67);
    printf("%.2f F = %.2f C\n", temp, (temp - 32) * 5.0 / 9.0);
    break;
  case 3:
    printf("Quitting.\n");
    break;
  default:
    printf("Invalid option\n");
  }

  return 0;
}