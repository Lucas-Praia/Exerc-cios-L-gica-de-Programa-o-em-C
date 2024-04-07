#include <stdio.h>

int main (void) {
  int mat1[2][2], mat2[2][2], resultado[2][2];

  printf("Digite os elementos da matriz A:\n");
  for (int i = 0; i < 2; i++){
    for (int j = 0; j < 2; j++){
      printf("Elemento A[%d][%d]: ", i, j);
      scanf("%d", &mat1[i][j]);
    }
  }

  printf("Digite os elementos da matriz B:\n");
  for (int i = 0; i < 2; i++){
    for (int j = 0; j < 2; j++){
      printf("Elemento B[%d][%d]: ", i, j);
      scanf("%d", &mat2[i][j]);
    }
  }

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      resultado[i][j] = 0;
    }
  }

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      for (int k = 0; k < 2; k++) {
        resultado[i][j] += mat1[i][k] * mat2[k][j];
      }
    }
  }

  printf("A matriz A eh:\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d ", mat1[i][j]);
    }
    printf("\n");
  }

  printf("A matriz B eh:\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d ", mat2[i][j]);
    }
    printf("\n");
  }

  printf("A multiplicação das matrizes A e B eh:\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d ", resultado[i][j]);
    }
    printf("\n");
  }

  return 0;
}

