/*Em sistemas de controle de nível de água de caldeiras, conforme o vapor vai sendo perdido
externamente na tubulação, há a necessidade de injetar água na caldeira para que o nível se
mantenha sempre em um mínimo aceitável, evitando danos em virtude de falta de água. A figura
abaixo contém um diagrama de controle de nível de água de uma caldeira. O CLP aciona a bomba
de alimentação de água (3) e a válvula de controle de alimentação de água (2) sempre que o sensor
de nível capacitivo (1) deixar de detectar a presença de água na sua haste. Elabore a lógica
necessária em Ladder para fazer este controle.*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main() {
    srand(time(NULL)); 

    int volumeMaximo = 1000; 
    int limitePercentual = 60; 

    while (true) { 
        bool aguaPresente = rand() % 2 == 0; 

        if (!aguaPresente) {
            int volumeAtual = rand() % (volumeMaximo + 1); 
            int limiteVolume = volumeMaximo * limitePercentual / 100;

            if (volumeAtual < limiteVolume) {
                printf("Abrindo a valvula de controle de agua.\n");
                printf("Ligando a bomba de agua.\n");
                printf("agua adicionada com sucesso.\n");
            } else {
                printf("Reservatorio esta no limite. Parando de adicionar agua.\n");
                break;
            }
        }

        if (!aguaPresente) {
            printf("Ativando o alarme de nivel de agua.\n");
        }

        sleep(1);
    }   

    return 0;
}
