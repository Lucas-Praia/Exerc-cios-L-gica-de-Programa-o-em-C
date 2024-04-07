//08.	Crie uma matriz 4x4 preencha e verifique se a matriz eh uma matriz identidade, se for exiba uma mensagem com a informacao:
//A matriz eh uma matriz identidade, caso contrario informe que nao eh uma matriz identidade.

#include <stdio.h>

int main(void) {
    int matriz[4][4];
    int matriz_id[4][4] = {
        {1, 0, 0, 0},
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1}
    };

    int i, j;
    int verdade = 1; 

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Insira um valor para [%d,%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz criada:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (matriz[i][j] != matriz_id[i][j]) {
                verdade = 0;  // Define como falso (0) se encontrar um elemento diferente
                break;  //
            }
        }
        
    }

    if (verdade == 1) {
        printf("Eh uma matriz identidade\n");
    } else {
        printf("Nao eh uma matriz identidade\n");
    }

    return 0;
}
