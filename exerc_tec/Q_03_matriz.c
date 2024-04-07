//Crie uma Matriz X de terceira ordem, inicialize a matriz como na tabela abaixo, some os elementos da primeira e mostre o resultado, some os elementos da terceira linha e mostre o resultado, some os elementos da primeira coluna e mostre o resultado.

#include <stdio.h>

int main(){

    int i, j;
    int matriz [3][3] = {{10,20,30},
                         {40,50,60},
                         {70,80,90}},
                          soma = 0;


    for ( i = 0; i < 3 ; i++) {
        printf("\n");
        for (int j = 0; j < 3; j++) {
            printf(" %d",matriz [i][j]);
        }
    }

    for (int i = 0; i < 1; i++){
        for (int j = 0; j < 3; j++){
            soma = (soma + matriz [i][j]);
        }
    }
    printf("\nResultado da soma dos elementos da primeira linha e");
    printf("= %d",soma);


    soma = 0;

    for (int i = 2; i < 3; i++){
        for (int j = 0; j < 3; j++){
            soma = (soma + matriz [i][j]);
        }
    }
    printf("\nResultado da soma dos elementos da terceira linha e");
    printf("= %d",soma);

    soma =0;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 1; j++){
            soma = (soma + matriz [i][j]);
        }
    }
    printf("\nResultado da soma dos elementos da primeira coluna e");
    printf("= %d",soma);
}