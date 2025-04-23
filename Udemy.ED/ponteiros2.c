#include <stdio.h>
#include <stdlib.h>


struct ponto
{
   float x1, x2;
};




typedef struct ponto Ponto;


int main(){
    Ponto *p = (Ponto*) malloc(sizeof(Ponto));
    p -> x1 = 10;
    p -> x2 = 20;
    printf("\nO valor de x1 = %.2f\nO valor de x2 = %.2f",p -> x1, p -> x2);

}