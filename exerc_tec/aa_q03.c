/*
 * 3). Crie um programa que:
a) Aloque dinamicamente um vetor de 5 números inteiros
b) Peça para o usuário digitar os 5 números no espaço alocado
c) Mostre na tela os 5 números
d) Libere a memória alocada
 */



#include <stdio.h>
#include <stdlib.h>

int main() {
    // Alocação dinâmica de um vetor de 5 números inteiros
    int *vetor = (int *)malloc(5 * sizeof(int));

    // Verificação se a alocação de memória foi bem-sucedida
    if (vetor == NULL) {
        printf("Erro: Nao foi possivel alocar memoria.\n");
        return 1;
    }

    // Pedir ao usuário para digitar os 5 números
    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Mostrar os 5 números
    printf("Os numeros digitados sao:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Libera a memoria alocada
    free(vetor);

    return 0;
}
