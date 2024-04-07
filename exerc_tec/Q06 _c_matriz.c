//06.	Leia duas matrizes 3x3, e imprima a multiplicação das duas matrizes.

#include <stdio.h>

#include <stdio.h>

int main (void) {
  int mat1[3][3], mat2[3][3], resultado[3][3],i,j,k;

  printf("Digite os elementos da matriz A:\n");
  for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
      printf("Elemento A[%d][%d]: ", i, j);
      scanf("%d", &mat1[i][j]);
    }
  }

  printf("Digite os elementos da matriz B:\n");
  for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
      printf("Elemento B[%d][%d]: ", i, j);
      scanf("%d", &mat2[i][j]);
    }
  }

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      resultado[i][j] = 0;
    }
  }

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      for (k = 0; k < 3; k++) {
        resultado[i][j] += mat1[i][k] * mat2[k][j];
      }
    }
  }

  printf("A matriz A eh:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d\t ", mat1[i][j]);
    }
    printf("\n");
  }

  printf("A matriz B eh:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d\t ", mat2[i][j]);
    }
    printf("\n");
  }

  printf("A multiplicao das matrizes A e B eh:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d\t ", resultado[i][j]);
    }
    printf("\n");
  }

  return 0;
}


