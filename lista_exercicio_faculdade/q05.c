/*A empresa Xing-Ling contratou você para fazer a programação de um novo equipamento
adquirido.
A maquina é uma separadora de peças e sua programação funciona da seguinte forma: Ao
pressionar o botão de START a esteira M1 liga e o cilindro C1 avança, a peça que se desloca pela
esteira é testada pelos sensores que verificam sua altura. Peças grandes seguem até o final da esteira
e caem na caixa das peças grandes. Peças pequenas vão ate o sensor S4, então o cilindro C2 avança,
conduzindo a peça para a caixa das pequenas. Ambos os tipos de peças ao passarem pelo sensor em
suas caixas encerram o processo, desligando a esteira e recuando os cilindros, finalizando o ciclo e
dando condição para um novo ciclo. A lâmpada liga quando o ciclo estiver em funcionamento e o
botão STOP finaliza o ciclo.*/

#include <stdio.h>

int main() {
    int start = 0, stop = 0, sensor1 = 0, sensor2 = 0, sensor3 = 0, sensor4 = 0, ciclo_funcionamento = 0;

    while (1) {
        printf("Pressione 1 para START ou 0 para STOP: ");
        scanf("%d", &start);

        if (start && !ciclo_funcionamento) {
            printf("Comecando o ciclo.\n");
            ciclo_funcionamento = 1;
            printf("Ligando a esteira e avançando o cilindro C1.\n");
        }

        printf("Informe os sensores S1, S2, S3 e S4: (0 desativado e 1 eh ativado) \n");
        printf("S1: ");
        scanf("%d", &sensor1);
        printf("S2: ");
        scanf("%d", &sensor2);
        printf("S3: ");
        scanf("%d", &sensor3);
        printf("S4: ");
        scanf("%d", &sensor4);

        if (sensor1 && ciclo_funcionamento) {
            printf("Peca grande detectada. Vou ate a caixa de pecas grandes.\n");
        }

        if (sensor2 && ciclo_funcionamento) {
            printf("Peca pequena detectada. Encaminhando para o sensor 4.\n");
        }

        if (sensor4 && ciclo_funcionamento) {
            printf("Avancando o cilindro C2 para encaminhar a peca para a caixa das peças pequenas.\n");
        }

        if (sensor3 && ciclo_funcionamento) {
            printf("Terminando o ciclo.\n");
            ciclo_funcionamento = 0;
            printf("Desligando a esteira e recuando os cilindros.\n");
        }

        printf("\nPressione 1 para continuar ou 0 para sair: ");
        scanf("%d", &stop);
        if (!stop) {
            break;
        }
    }

    return 0;
}

