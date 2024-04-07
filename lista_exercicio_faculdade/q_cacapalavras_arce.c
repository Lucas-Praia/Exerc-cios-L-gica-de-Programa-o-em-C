#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int N, M, P, i, j, cont;
    char palavra[101];
   
    // Lendo a entrada
    scanf("%d %d %d", &N, &M, &P);
    getchar(); // Limpar o buffer de entrada
    
    for (i = 0; i < N; i++) {
        scanf("%s", palavra);
        int tam = strlen(palavra);
        cont = 0;
        int found = 0;
        int tipo = 4; // Tipo de posição da palavra: 1 - diagonal principal, 2 - acima, 3 - abaixo, 4 - inexistente
        
        // Converter palavra para minúsculas
        for (int k = 0; k < tam; k++) {
            palavra[k] = tolower(palavra[k]);
        }
        
        // Inicializando a matriz
        char plMatrix[M][P];
        for (int x = 0; x < M; x++) {
            for (int y = 0; y < P; y++) {
                // Coloca a palavra da diagonal principal
                if (x == y && cont < tam) {
                    plMatrix[x][y] = palavra[cont];
                    cont++;
                } else {
                    plMatrix[x][y] = '.';
                }
            }
        }

        // Procurando a palavra na diagonal principal
        cont = 0;
        for (int x = 0; x < M; x++) {
            for (int y = 0; y < P; y++) {
                if (plMatrix[x][y] == palavra[cont] || plMatrix[x][y] == palavra[tam - cont - 1]) {
                    cont++;
                    if (cont == tam) {
                        found = 1;
                        tipo = 1;
                        break;
                    }
                } else {
                    cont = 0;
                }
            }
            if (found) break;
        }
        
        // Procurando a palavra acima da diagonal principal
        if (!found) {
            cont = 0;
            for (int x = 0; x < M - tam + 1; x++) {
                for (int y = 0; y < P; y++) {
                    int match = 1;
                    for (int k = 0; k < tam; k++) {
                        if (tolower(plMatrix[x + k][y]) != palavra[k] && tolower(plMatrix[x + k][y]) != palavra[tam - k - 1]) {
                            match = 0;
                            break;
                        }
                    }
                    if (match) {
                        found = 1;
                        tipo = 2;
                        break;
                    }
                }
                if (found) break;
            }
        }
        
        // Procurando a palavra abaixo da diagonal principal
        if (!found) {
            cont = 0;
            for (int x = tam - 1; x < M; x++) {
                for (int y = 0; y < P; y++) {
                    int match = 1;
                    for (int k = 0; k < tam; k++) {
                        if (tolower(plMatrix[x - k][y]) != palavra[k] && tolower(plMatrix[x - k][y]) != palavra[tam - k - 1]) {
                            match = 0;
                            break;
                        }
                    }
                    if (match) {
                        found = 1;
                        tipo = 3;
                        break;
                    }
                }
                if (found) break;
            }
        }

        // Imprimindo o resultado
        printf("%d Palavra \"%s\" ", i + 1, palavra);
        if (tipo == 1) {
            printf("na diagonal principal\n");
        } else if (tipo == 2) {
            printf("acima da diagonal principal\n");
        } else if (tipo == 3) {
            printf("abaixo da diagonal principal\n");
        } else {
            printf("inexistente\n");
        }
    }

    return 0;
}
