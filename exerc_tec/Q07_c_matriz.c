//01.Desenvolva um algoritmo que preencha uma matriz de dimensao 3x3. Apos preencher toda a matriz, o usuario deve inserir uma chave de busca X, caso exista algum numero igual a X dentro da matriz, o algoritmo devera mostrar na tela o indice da linha e da coluna que se encontra o valor X pela primeira vez. Caso contrario se a chave nao for encontrada o programa devera retornar uma mensagem: Chave nao encontrada.

#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j, chave, encontrada;

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

    printf("Insira a chave de busca : ");
    scanf("%d", &chave);

    encontrada = 0;

    // Busca pela chave na matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] == chave) {
                printf("Chave encontrada em [%d,%d].\n", i, j);
                encontrada = 1;
                break;
            }
        }
        if (encontrada) {
            break;
        }
    }

    if (!encontrada) {
        printf("Chave nao encontrada.\n");
    }

    return 0;
}
