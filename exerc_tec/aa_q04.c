//Faça um programa que leia do usuário o tamanho de um vetor (inteiros) a ser lido e faça a sua alocação dinâmica de memória. Depois, leia do usuário seus valores e imprima o vetor lido e mostre quantos dos números são pares e quantos são ımpares.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int tam;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    //alocacao da memoria
    int *vetor = (int*)malloc(tam * sizeof(int));

    if (vetor == NULL) {
        printf("Erro: Nao foi possível alocar memoria.");
        return 1;
    }

    printf("Digite os valores do vetor:\n");
    for (int i = 0; i < tam; i++) {
        scanf("%d", &vetor[i]);
    }

    // Contagem pares e impares
    int pares = 0, impares = 0;
    for (int i = 0; i < tam; i++) {
        if (vetor[i] % 2 == 0)
            pares++;
        else
            impares++;
    }

    printf("Vetor lido: ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    printf("Numero de pares: %d\n", pares);
    printf("Numero de ímpares: %d\n", impares);

    free(vetor);

    return 0;
}

