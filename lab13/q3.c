#include <float.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *fp = fopen("twoDPoints.csv", "r");
  if (!fp) {
    printf("Cannot open twoDPoints.csv\n");
    return 1;
  }

  int n;
  fscanf(fp, "%d", &n);

  int **pointsArray = (int **)malloc(n * sizeof(int *));
  for (int i = 0; i < n; i++) {
    pointsArray[i] = (int *)malloc(2 * sizeof(int));
    fscanf(fp, "%d,%d", &pointsArray[i][0], &pointsArray[i][1]);
  }
  fclose(fp);

  int **closePointsArray = (int **)malloc(n * sizeof(int *));
  for (int i = 0; i < n; i++)
    closePointsArray[i] = (int *)malloc(2 * sizeof(int));

  for (int i = 0; i < n; i++) {
    double minDist = DBL_MAX;
    int closestIdx = -1;

    for (int j = 0; j < n; j++) {
      if (i == j)
        continue;
      double dx = pointsArray[i][0] - pointsArray[j][0];
      double dy = pointsArray[i][1] - pointsArray[j][1];
      double dist = dx * dx + dy * dy;

      if (dist < minDist) {
        minDist = dist;
        closestIdx = j;
      }
    }

    closePointsArray[i][0] = pointsArray[closestIdx][0];
    closePointsArray[i][1] = pointsArray[closestIdx][1];
  }

  printf("%-6s %-15s %-15s\n", "Index", "Point", "Closest Point");
  for (int i = 0; i < n; i++) {
    printf("%-6d (%d, %d)%*s(%d, %d)\n", i, pointsArray[i][0],
           pointsArray[i][1], 10, "", closePointsArray[i][0],
           closePointsArray[i][1]);
  }

  for (int i = 0; i < n; i++) {
    free(pointsArray[i]);
    free(closePointsArray[i]);
  }
  free(pointsArray);
  free(closePointsArray);

  return 0;
}