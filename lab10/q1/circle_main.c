#include "circle.h"
#include <stdio.h>

int main() {
  float radius, area, perimeter;

  printf("Enter radius: ");
  scanf("%f", &radius);

  circleData(radius, &area, &perimeter);

  printf("Area: %.2f\n", area);
  printf("Perimeter: %.2f\n", perimeter);

  return 0;
}