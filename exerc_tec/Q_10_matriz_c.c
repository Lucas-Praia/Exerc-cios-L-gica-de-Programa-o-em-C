//10.	Crie duas Matriz A 4x4 e uma Matriz B 4x4 , insira valores para cada posição da Matriz A e B em seguida efetue a troca de elementos, Matriz irá receber os elementos de B e Matriz B receberá os elementos de A.

#include <stdio.h>

int main(void) {
    int matriz_a[4][4], matriz_b[4][4], matriz_aux[4][4], i, j;

    
    printf("Insira valores para a Matriz A (4x4):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Insira um valor para [%d,%d]: ", i, j);
            scanf("%d", &matriz_a[i][j]);
        }
    }

    
    printf("\nInsira valores para a Matriz B (4x4):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Insira um valor para [%d,%d]: ", i, j);
            scanf("%d", &matriz_b[i][j]);
        }
    }

    printf("\nMatriz A (4x4):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", matriz_a[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz B 4x4):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", matriz_b[i][j]);
        }
        printf("\n");
    }

    
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            matriz_aux[i][j] = matriz_a[i][j];
            matriz_a[i][j] = matriz_b[i][j];
            matriz_b[i][j] = matriz_aux[i][j];
        }
    }

    printf("\nMatrizes trocadas:\n");
    printf("Matriz A:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", matriz_a[i][j]);
        }
        printf("\n");
    }

    printf("Matriz B:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", matriz_b[i][j]);
        }
        printf("\n");
    }

    return 0;
}