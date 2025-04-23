#include <stdio.h>
#include <stdlib.h>



struct ponto{
    int x1;
    int x2;
    struct ponto *prox;
};

typedef struct ponto Ponto;
Ponto *lista = NULL;


//add no inicio
void add(int x1, int x2){
    Ponto *p = (Ponto*) malloc(sizeof(Ponto));
    p-> x1 = x1;
    p -> x2 = x2;
    p -> prox = lista;
    lista = p;
}

void insercao();

void imprimir(Ponto *p){
    if (p != NULL)
    {
        printf("\nx = %d   y = %d",p->x1,p->x2);
        imprimir(p->prox);
    }else{
        printf("Nao ha mais elementos nesta lista");
    }
}



int main(){
    add(2,3);// 1 elemnto
    add(3,4);// 2 elemento
    Ponto *auxlista = lista;
    imprimir(auxlista);




    return 0;
}