/*
6. Crie um programa que declare uma estrutura (registro) para o cadastro de alunos.
a) Deverão ser armazenados, para cada aluno: matrıcula, nome (apenas um) e ano
de nascimento.
b) Ao início do programa, o usuário deverá informar o número de alunos que serão
armazenados
c) O programa devera alocar dinamicamente a quantidade necessária de memória
para armazenar os registros dos alunos.
d) O programa deverá pedir ao usuário que entre com as informações dos alunos.
e) Ao final, mostrar os dados armazenados e liberar a memória alocada.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matricula;
    char nome[50];
    int ano_nascimento;
} Aluno;

int main() {
    int num_alunos;

    printf("Digite o numero de alunos a serem cadastrados: ");
    scanf("%d", &num_alunos);

    // Alocando memória
    Aluno *alunos = malloc(num_alunos * sizeof(Aluno));

    if (alunos == NULL) {
        printf("Erro: não foi possível alocar memoria.");
        return 1;
    }

   
    for (int i = 0; i < num_alunos; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Nome: ");
        scanf("%s", alunos[i].nome);
        printf("Ano de Nascimento: ");
        scanf("%d", &alunos[i].ano_nascimento);
    }

    // Mostra os dados armazenados
    printf("\nDados dos Alunos:\n");
    for (int i = 0; i < num_alunos; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Ano de Nascimento: %d\n", alunos[i].ano_nascimento);
    }

    
    free(alunos);

    return 0;
}
