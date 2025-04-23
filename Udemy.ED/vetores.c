#include <stdio.h>



int v[4]; //variavel vetor global

float v1[3];

int main(){


    v[0] = 45;// indice sempre comeca do 0;
    v[1] = 78;
    v[2] = 9;
    v[3] = 5;
    
    for(int i = 0; i < 3; i++){
        printf("\nDigite um valor: \n");
        scanf("%f",&v1[i]);
    }

    for(int i = 0; i < 3; i++){

        printf("Valor de v1[%d]: %.2f\n",i,v1[i]);
    }



    return 0;
}

