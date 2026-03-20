#include "circle.h"

void circleData(float radius, float *area, float *perimeter) {
  *area = 3.14159 * radius * radius;
  *perimeter = 2 * 3.14159 * radius;
}