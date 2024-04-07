/*Considere um sistema com 4 Motores.
• M1 trabalham independente para alimentar uma caixa com agua
• M2 e M3 trabalham juntos por uma hora e desliga por meio de um temporizador
depois de 1H de funcionamento
M4 é uma bomba reserva que irá funcionar caso M2 ou M3 apresente alguma falha*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int m1 = 0, m2 = 0, m3 = 0, m4 = 0;
    int nivel_a = 1000, nivel_b = 250;
    int tempo_total = 0;

    while (nivel_a > 0 && tempo_total < 3600) {
        if (nivel_a > 0) {
            m1 = 1;
            nivel_a -= 50;
        } else {
            m1 = 0;
        }

        
        if (m2 == 0 && m3 == 0) {
            m2 = 1;
            m3 = 1;

            for (int i = 0; i < 3600; i++) {
                
                tempo_total++;
                if (nivel_a >= 1000) { 
                    m2 = 0;
                    m3 = 0;
                    m4 = 0; 
                    break; 
                }
            }
            m2 = 0;
            m3 = 0;
        }

        if ((m2 == 0 && m3 == 1) || (m2 == 1 && m3 == 0)) {
            m4 = 1;
        } else {
            m4 = 0;
        }
    }

    return 0;
}