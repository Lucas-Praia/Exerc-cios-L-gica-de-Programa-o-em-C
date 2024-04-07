//Q03: Construa uma estrutura aluno com nome, número de matrícula e curso. Leia do
//usuário a informação de 5 alunos, armazene em vetor dessa estrutura e imprima os
//dados na tela.

#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura Aluno
typedef struct {
    char nome[100];
    int matricula;
    char curso[100];
} Aluno;

int main() {
    // Declaração do vetor de alunos
    Aluno alunos[5];

    // Entrada de dados
    printf("Digite as informacoes dos 5 alunos:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nAluno %d:\n", i + 1);

        printf("Nome: ");
        scanf("%99s", alunos[i].nome); // Lê o nome do aluno

        printf("Numero de Matricula: ");
        scanf("%d", &alunos[i].matricula); // Lê o número de matrícula do aluno

        printf("Curso: ");
        scanf("%99s", alunos[i].curso); // Lê o curso do aluno

        // Limpa o buffer do teclado para evitar problemas na leitura da próxima entrada
        while (getchar() != '\n');
    }

    // Saída de dados
    printf("\nInformacoes dos alunos:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Numero de Matricula: %d\n", alunos[i].matricula);
        printf("Curso: %s\n", alunos[i].curso);
    }

    return 0;
}
