//Faça um programa que solicite ao usuário preencher valores inteiros em uma matriz quadrada de ordem 3, o programa deverá mostrar a matriz e em seguida somar os elementos da diagonal principal e exibir o resultado.

#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j, soma_diagonal;
    int vetor[3];


    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Insira um valor para [%d,%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }


    printf("\nMatriz criada:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }


    // Calcular a soma dos elementos da diagonal principal
    soma_diagonal = 0;

    for (i = 0; i < 3; i++) {
        soma_diagonal += matriz[i][i];
    }

    // Exibir a soma dos elementos da diagonal principal
    printf("\nSoma da diagonal principal: %d\n", soma_diagonal);

    return 0;
}
