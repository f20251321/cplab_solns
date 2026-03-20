// transpose.c

// implement this function as defined in transpose.h
void transposeByReference(int matrix[4][4]) {
  int temp;
  for (int i = 0; i < 4; i++) {
    for (int j = i + 1; j < 4; j++) {
      temp = matrix[i][j];
      matrix[i][j] = matrix[j][i];
      matrix[j][i] = temp;
    }
  }
}

// implement this function as defined in transpose.h
void transposeByPointer(int *matrix) {
  int temp;
  for (int i = 0; i < 4; i++) {
    for (int j = i + 1; j < 4; j++) {
      temp = *(matrix + i * 4 + j);
      *(matrix + i * 4 + j) = *(matrix + j * 4 + i);
      *(matrix + j * 4 + i) = temp;
    }
  }
}