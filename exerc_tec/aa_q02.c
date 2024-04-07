/*
Desenvolva um programa que calcule a soma de dois vetores de números reais (double). A implementação deste programa deve considerar as dimensões fornecida pelo usuário (Dica: represente o vetor através de variáveis do tipo double **, usando alocação dinâmica de memória).
*/

#include <stdio.h>
#include <stdlib.h>

// Função para alocar um vetor de tamanho 'size' e inicializar todos os elementos com zero
double* criarVetor(int size) {
    double *vetor = (double *)malloc(size * sizeof(double));
    if (vetor == NULL) {
        printf("Erro: Não foi possível alocar memória\n");
        exit(1);
    }

    // Inicializa todos os elementos do vetor com zero
    for (int i = 0; i < size; i++) {
        vetor[i] = 0.0;
    }

    return vetor;
}

// Função para liberar a memória alocada para o vetor criado
void liberarVetor(double *vetor) {
    free(vetor);
}

// Função para ler os elementos de um vetor
void lerVetor(double *vetor, int size) {
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < size; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%lf", &vetor[i]);
    }
}

// Função para somar dois vetores e armazenar o resultado em um terceiro vetor
double* somarVetores(double *vetor1, double *vetor2, int size) {
    double *resultado = criarVetor(size);
    for (int i = 0; i < size; i++) {
        resultado[i] = vetor1[i] + vetor2[i];
    }
    return resultado;
}

// Função para imprimir os elementos de um vetor
void imprimirVetor(double *vetor, int size) {
    printf("Vetor: ");
    for (int i = 0; i < size; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int tamanho;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tamanho);

    // Alocando memória para os dois vetores
    double *vetor1 = criarVetor(tamanho);
    double *vetor2 = criarVetor(tamanho);

    // Lendo os elementos dos vetores acrescentado pelo usuario
    printf("Para o primeiro vetor:\n");
    lerVetor(vetor1, tamanho);

    printf("Para o segundo vetor:\n");
    lerVetor(vetor2, tamanho);

    // Somando os vetores
    double *soma = somarVetores(vetor1, vetor2, tamanho);

    // Imprimindo os vetores e o resultado da soma
    printf("\n");
    printf("Vetor 1:\n");
    imprimirVetor(vetor1, tamanho);

    printf("Vetor 2:\n");
    imprimirVetor(vetor2, tamanho);

    printf("Resultado da soma:\n");
    imprimirVetor(soma, tamanho);

    // Liberando a memória alocada
    liberarVetor(vetor1);
    liberarVetor(vetor2);
    liberarVetor(soma);

    return 0;
}
