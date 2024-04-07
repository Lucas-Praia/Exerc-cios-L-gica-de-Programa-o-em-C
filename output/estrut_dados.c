// o programa abaixo é estático
//#include <stdio.h>

//int main (){

//    int a;
//    a = 3;

//    printf("O valor de a: %d",a);

//}

//o programa abaixo é dinâmico
#include <stdio.h>
#include <stdlib.h>

int main() {

    int *a;

    a = (int*)malloc(sizeof(int));

    if (a) {
        printf("O valor alocado na memoria\n");
        *a = 1;
        printf("O valor de a eh %d\n",*a); 
    }
    else{
        printf("Não foi possível alocar na memoria\n");
    }
    free(a);
    
    return 0;
}
