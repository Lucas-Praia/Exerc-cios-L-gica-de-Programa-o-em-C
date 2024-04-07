//Faça um programa que receba do usuário o tamanho de uma string e chame uma função para alocar dinamicamente essa string. Em seguida, o usuário deverá informar o conteúdo dessa string. O programa imprime a string sem suas vogais.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int tam;
    printf("Informe o tamanho da palavra: ");
    scanf("%d", &tam);

    // Alocando a palavra
    char* palavra = (char*)malloc(tam * sizeof(char));
    if (palavra == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    printf("Informe a palavra: ");
    scanf(" %s", palavra);

    
    int i, j;
    for (i = 0, j = 0; i < tam; i++) {
        
        if (palavra[i] != 'a' && palavra[i] != 'e' && palavra[i] != 'i' && palavra[i] != 'o' && palavra[i] != 'u' &&
            palavra[i] != 'A' && palavra[i] != 'E' && palavra[i] != 'I' && palavra[i] != 'O' && palavra[i] != 'U') {
            palavra[j] = palavra[i];
            j++;
        }
    }

    printf("String sem vogais: ");
    for (i = 0; i < j; i++) {
        printf("%c", palavra[i]);
    }
    printf("\n");

    
    free(palavra);

    return 0;
}

