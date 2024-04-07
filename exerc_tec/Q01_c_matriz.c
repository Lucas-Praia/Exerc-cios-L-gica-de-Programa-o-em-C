#include <stdio.h>

int main(){
    int matriz_a[2][2], matriz_b[2][2], matriz_c[2][2];
    int i,j;


    printf("Matriz A");
    printf("\n");
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            printf("Insira um valor para [%d,%d]: ", i, j);
            scanf("%d", &matriz_a[i][j]);
        }
    }

    printf("\nMatriz B");
    printf("\n");
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            printf("Insira um valor para [%d,%d]: ", i, j);
            scanf("%d", &matriz_b[i][j]);
        }
    }

    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            matriz_c[i][j] = (matriz_a[i][j] + matriz_b[i][j]);
        }
    }

    printf("\nMatriz A");

    for (i = 0; i < 2; i++){
            printf("\n");
        for (j = 0; j < 2; j++){
           printf("%d", matriz_a[i][j]);
        }
    }

    printf("\nMatriz B");

    for (i = 0; i < 2; i++){
            printf("\n");
        for (j = 0; j < 2; j++){
           printf("%d", matriz_b[i][j]);
        }
    }

    printf("\nMatriz C");

    for (i = 0; i < 2; i++){
            printf("\n");
        for (j = 0; j < 2; j++){
           printf("%d", matriz_c[i][j]);
        }
    }


}
