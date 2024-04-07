//09.	Elabore um programa em C que leia uma matriz de 12x4 com os valores das vendas de uma loja, em que cada linha represente um mês do ano e cada coluna uma semana do mês. Calcule e imprima o total vendido em cada mês do ano.
#include <stdio.h>

int main(void) {
    float matriz_a[12][4], total_por_mes[12] = {0};
    int i, j;

    for (i = 0; i < 12; i++) {
        printf("Insira os valores das vendas para o mes %d:\n", i + 1);
        for (j = 0; j < 4; j++) {
            printf("Semana %d: ", j + 1);
            scanf("%f", &matriz_a[i][j]);  
            total_por_mes[i] += matriz_a[i][j];
        }
    }

    printf("A matriz com os meses e seus valores é:\n");
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 4; j++) {
            printf("%0.2f\t", matriz_a[i][j]);  
        }
        printf("\n");
    }

    printf("\nTotal de venda mensal:\n");
    for (i = 0; i < 12; i++) {
        printf("Mes %d: %0.2f\n", i + 1, total_por_mes[i]); 
    }

    return 0;
}
