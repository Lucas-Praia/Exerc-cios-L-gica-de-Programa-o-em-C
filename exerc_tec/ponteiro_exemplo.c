#include<stdio.h>
    int main(void){
    int x,y, *p;
    y=0;
    p = &y;
    x = *p; //x recebe o valor apontado por p, que é o conteúdo de y (0)
    x =4; // x recebe o valor 4.
    (*p)++; // Incrementa o valor apontado por p (o conteúdo de y) em 1. Agora, y é 1
    --x;//Decrementa x em 1. Agora, x é 3.
    (*p)  += x; //Adiciona o valor de x ao valor apontado por p (o conteúdo de y). Agora, y é 4.
    printf("x=%d y=%d *p=%d", x, y, *p);


    return 0;
}

