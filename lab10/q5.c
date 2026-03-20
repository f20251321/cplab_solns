#include <stdio.h>

void transposeByReference(int mat[4][4]) {
  for (int i = 0; i < 4; i++) {
    for (int j = i + 1; j < 4; j++) {
      int temp = mat[i][j];
      mat[i][j] = mat[j][i];
      mat[j][i] = temp;
    }
  }
}

void transposeByPointer(int (*mat)[4]) {
  for (int i = 0; i < 4; i++) {
    for (int j = i + 1; j < 4; j++) {
      int temp = *(*(mat + i) + j);
      *(*(mat + i) + j) = *(*(mat + j) + i);
      *(*(mat + j) + i) = temp;
    }
  }
}

void printMatrix(int mat[4][4]) {
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++)
      printf("%d\t", mat[i][j]);
    printf("\n");
  }
}

int main() {
  int mat1[4][4], mat2[4][4];

  printf("Enter 4x4 matrix elements:\n");
  for (int i = 0; i < 4; i++)
    for (int j = 0; j < 4; j++) {
      scanf("%d", &mat1[i][j]);
      mat2[i][j] = mat1[i][j];
    }

  printf("\nOriginal:\n");
  printMatrix(mat1);

  transposeByReference(mat1);
  printf("\nTranspose (by reference):\n");
  printMatrix(mat1);

  transposeByPointer(mat2);
  printf("\nTranspose (by pointer):\n");
  printMatrix(mat2);

  return 0;
}