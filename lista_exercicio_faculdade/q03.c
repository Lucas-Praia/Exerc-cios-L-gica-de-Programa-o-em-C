/*Um sistema de reservatório deve ser controlado usando um CLP. O sistema é
composto de uma válvula de entrada P, duas bombas (M1 e M2), um alarme AL e
quatro sensores de nível (a, b, c, d), conforme ilustrado na figura abaixo. As condições
de funcionamento são as seguintes:
• Se o nível for “a”, então fecha-se a válvula P
• Se o nível for igual ou inferior a “b”, então abre-se a válvula P
• Acima de “b”, M1 e M2 bombeiam (ligam)
• Abaixo de “b”, somente M1 bombeia
• Abaixo de “c”, soa o alarme AL
• Em “d”, nenhuma das bombas deverá funcionar*/

#include <stdio.h>
#include<stdlib.h>

#define SENSOR_A 1
#define SENSOR_B 2
#define SENSOR_C 3
#define SENSOR_D 4

#define BOMBA_M1 1
#define BOMBA_M2 2
#define VALVULA_P 3
#define ALARME_AL 4

int main() {
    int nivel;

    printf("Digite o nível do reservatório (1 a 4): ");
    scanf("%d", &nivel);

    if (nivel == SENSOR_A) {
        
        printf("Fechando a válvula P.\n");
    } else if (nivel <= SENSOR_B) {

        printf("Abrindo a válvula P.\n");
    } else if (nivel > SENSOR_B) {
        
        printf("Ligando as bombas M1 e M2.\n");
    } else if (nivel < SENSOR_B) {
       
        printf("Ligando a bomba M1.\n");
    }

    if (nivel < SENSOR_C) {

        printf("Ativando o alarme AL.\n");
    }

    if (nivel == SENSOR_D) {
       
        printf("Desligando todas as bombas.\n");
    }

    return 0;
}