// Q02: Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
// armazene os dados em uma estrutura.


#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura Pessoa
typedef struct {
    char nome[100];
    int idade;
    char endereco[100];
} Pessoa;

int main() {
    // Declaração da variável do tipo Pessoa
    Pessoa pessoa;

    // Entrada de dados
    printf("Digite o nome da pessoa: ");
    scanf("%99[^\n]", pessoa.nome); // Lê uma string até encontrar uma quebra de linha

    printf("Digite a idade da pessoa: ");
    scanf("%d", &pessoa.idade);

    // Limpa o buffer do teclado para evitar problemas na leitura da próxima entrada
    while (getchar() != '\n');

    printf("Digite o endereco da pessoa: ");
    scanf("%99[^\n]", pessoa.endereco);

    // Saída de dados
    printf("\nDados da pessoa:\n");
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Endereco: %s\n", pessoa.endereco);

    return 0;
}
