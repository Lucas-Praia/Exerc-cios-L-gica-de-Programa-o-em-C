//
//Crie uma Matriz 4x4 do tipo inteiro com valores informados pelo usuário em seguida mostre somente
// os elementos da Matriz que são pares.
//

#include <stdio.h>


int main () {

    int matriz[4][4];
    int i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Insira o valor da Matriz [%d,%d]:\n ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (matriz[i][j] % 2 == 0) {
                printf(" %d", matriz[i][j]);
            }
        }
    }
}