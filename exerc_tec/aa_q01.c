/*
Escreva um programa em linguagem C que solicita ao usuário a quantidade de alunos de uma turma e aloca um vetor de notas (números reais)Depois de ler as notas, imprime a média aritmética. Obs: não deve ocorrer desperdício de memória; e após ser utilizada a memória deve ser devolvida.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_alunos;
    float *notas;
    float soma = 0.0, media;

    // Solicita ao usuário a quantidade de alunos da turma
    printf("Digite a quantidade de alunos na turma: ");
    scanf("%d", &num_alunos);

    // Aloca dinamicamente o vetor de notas dos alunos
    notas = (float *)malloc(num_alunos * sizeof(float));

    // Verifica se a alocação foi bem-sucedida
    if (notas == NULL) {
        printf("Erro: não foi possível alocar memória.");
        return 1;
    }

    // Lê as notas dos alunos da turma
    printf("Digite as notas dos alunos:\n");
    for (int i = 0; i < num_alunos; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    // Calcula a média aritmética dos alunos da turma
    media = soma / num_alunos;

    // Imprime a média
    printf("A media das notas e: %.2f\n", media);

    // Libera a memória alocada, liberando espaço na ram.
    free(notas);

    return 0;
}

