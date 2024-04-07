#include <stdio.h>

int main(void) {
    char matriz_a[3][3];
    int i, j, jogador, vitoria, jogadas;
    char jogarNovamente;

    while (1) {
        jogador = 1;
        vitoria = 0;
        jogadas = 0;

        printf("Carregando o tabuleiro:\n");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                matriz_a[i][j] = ' ';
            }
        }

        while (1) {
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    printf("| %c\t", matriz_a[i][j]);
                }
                printf("|\n");
            }

            printf("Jogador %d, onde voce deseja jogar? (linha coluna): ", jogador);
            scanf("%d %d", &i, &j);

            if (i >= 0 && i < 3 && j >= 0 && j < 3 && matriz_a[i][j] == ' ') {
                if (jogador == 1) {
                    matriz_a[i][j] = 'x';
                } else {
                    matriz_a[i][j] = 'o';
                }

                jogadas++;

                //empate
                if (jogadas == 9){
                    printf("Empate! O jogo terminou sem vencedor.\n");
                    break;
                }

                // horizontal
                for (i = 0; i < 3; i++) {
                    if (matriz_a[i][0] == matriz_a[i][1] && matriz_a[i][1] == matriz_a[i][2] && matriz_a[i][0] != ' ') {
                        vitoria = 1;
                    }
                }

                // vertical
                for (j = 0; j < 3; j++) {
                    if (matriz_a[0][j] == matriz_a[1][j] && matriz_a[1][j] == matriz_a[2][j] && matriz_a[0][j] != ' ') {
                        vitoria = 1;
                    }
                }

                // diagonal
                if (matriz_a[0][0] == matriz_a[1][1] && matriz_a[1][1] == matriz_a[2][2] && matriz_a[0][0] != ' ') {
                    vitoria = 1;
                }
                if (matriz_a[0][2] == matriz_a[1][1] && matriz_a[1][1] == matriz_a[2][0] && matriz_a[0][2] != ' ') {
                    vitoria = 1;
                }

                if (vitoria) {
                    printf("Parabens! Jogador %d venceu!\n", jogador);
                    break;
                }

                // Alternar jogadores
                if (jogador == 1) {
                    jogador = 2;
                } else {
                    jogador = 1;
                }
            } else {
                printf("Jogada invalida!\n");
            }
        }


        printf("Voce deseja jogar novamente? (S/N): ");
        scanf(" %c", &jogarNovamente);

        if (jogarNovamente != 'S' && jogarNovamente != 's') {
            break;
        }
    }

    return 0;
}
