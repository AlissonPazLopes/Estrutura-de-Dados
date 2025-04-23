#include <stdio.h>
#include <stdlib.h>


struct ponto
{
    float x, y;
    struct ponto *prox;
};

typedef struct ponto Ponto;

Ponto *Lista_encadeada;

void add(float x, float y)
{
    Ponto *p = (Ponto*) malloc(sizeof(Ponto));
    p -> x = x;
    p -> y = y;
    p ->prox = Lista_encadeada;
    Lista_encadeada = p;
}



void imprimir(){
    Ponto *auxiliarlista;
    while(auxiliarlista != NULL){
        printf("x = %.0f y = %.0f \n ",auxiliarlista->x, auxiliarlista->y);
        auxiliarlista = auxiliarlista->prox;

    }
}




int main(){
    add(1,3);
    add(3,4);
    add(8,9);
    imprimir();
    printf("\n%.0f\n\n",Lista_encadeada->x);
    return 0;
}