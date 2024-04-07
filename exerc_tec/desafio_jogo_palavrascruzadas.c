#include <stdio.h>
#include <string.h>

int main(void) {
    char matriz_jogo[4][4];
    char nome[20];
    int i, j, vitoria = 1;
    char matriz_resposta[4][4] = {
        {'a', 'm', 'o', 'r'},
        {'c', 'a', 's', 'a'},
        {'o', 'n', 'd', 'a'},
        {'p', 'i', 's', 'o'}
    };

    printf("\n----------Bem vindo ao jogo das palavras cruzadas---------\n");
    printf("\nDaqui pra frente, como posso ti chamar? ");
    scanf("%s", nome);

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            matriz_jogo[i][j] = ' ';
        }
    }

    printf("\nPalavras Cruzadas:\n");
    printf("-------------------\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("| %c ", matriz_jogo[i][j]);
        }
        printf("|\n-------------------\n");
    }

    printf("\n%s, temos um painel com dicas para voce.\n", nome);
    printf("Dica 1: O que tem entre mae e filho.\n");
    printf("Dica 2: O que um residencial tem? \n");
    printf("Dica 3: Camarao que dorme a ... leva.\n");
    printf("Dica 4: Voce anda em cima do ... \n");

    printf("\nPreencha a matriz com as respostas:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Digite a letra para a posicao [%d][%d]: ", i, j);
            scanf(" %c", &matriz_jogo[i][j]);

            if (matriz_jogo[i][j] != matriz_resposta[i][j]) {
                printf("Letra invalida! Tente novamente.\n");
                vitoria = 0; 
            }
        }
    }

    printf("\nTabuleiro Preenchido:\n");
    printf("-------------------\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("| %c ", matriz_jogo[i][j]);
        }
        printf("|\n-------------------\n");
    }

    if (vitoria) {
        printf("\n %s! Voce acertou as palavras!. Parabens!\n", nome);
    } else {
        printf("\n%s, voce perdeu!.\n", nome);
    }

    return 0;
}

