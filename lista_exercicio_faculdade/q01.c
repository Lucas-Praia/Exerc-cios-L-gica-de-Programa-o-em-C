/*Elabore um programa em Ladder para controlar dois motores (M1 e M2). As condições são as
seguintes:
• M1 pode ligar de forma independente
• M2 só pode ligar se M1 estiver ligado, mas pode continuar ligado após o desligamento de
M1
• Os motores são ligados pelas botoeiras L1 e L2, e são desligados pelas botoeiras D1 e D2*/

#include <stdio.h>

int main() {
    int m1 = 0, m2 = 0; 
    int l1 = 0, l2 = 0, d1 = 0, d2 = 0; 

    while (1) {
        int operacao;
        printf("Digite 1 para ligar a botoeira L1, 2 para ligar a botoeira L2, 3 para desligar a botoeira D1 e 4 para desligar a botoeira D2: ");
        scanf("%d", &operacao);

        if (operacao == 1) {
            l1 = 1;
        } else if (operacao == 2 && l1) { 
            l2 = 1;
            m2 = 1;
        } else if (operacao == 3) {
            d1 = 1;
            m1 = 0;
        } else if (operacao == 4) {
            d2 = 1;
            m2 = 0; 
        } else {
            printf("Opção inválida!\n");
            continue;
        }

        if (l1 && !d1)
            m1 = 1;
        if (l2 && !d2)
            m2 = 1;

        printf("Estado dos motores: M1 = %d, M2 = %d\n", m1, m2);
    }

    return 0;
}
