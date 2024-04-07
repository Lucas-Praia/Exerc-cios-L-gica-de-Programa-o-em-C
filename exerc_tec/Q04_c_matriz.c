//Crie uma Matriz de ordem 4 solicite que o usuário preencha a matriz, insira o conteúdo da diagonal principal dentro de um vetor

#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j;
    int vetor[4];


    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Insira um valor para [%d,%d]: ", i, j);
            scanf("%d\t", &matriz[i][j]);
        }
    }


    printf("\nMatriz criada:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t ", matriz[i][j]);
        }
        printf("\n");
    }


    for (i = 0; i < 4; i++) {
        vetor[i] = matriz[i][i];
    }


    printf("\nValores da diagonal principal: %d, %d, %d, %d\t", vetor[0], vetor[1], vetor[2], vetor[3]);

    return 0;
}
