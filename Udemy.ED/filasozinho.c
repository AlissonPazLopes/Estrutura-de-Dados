#include <stdio.h>
#include <stdlib.h>


struct pessoa{
    int ID;
    struct pessoa *prox;
};


typedef struct pessoa Pessoa;

Pessoa *fila = NULL; //vai inicia a fila que está vazia neste moemnto


void add(int ID){
    Pessoa *p = (Pessoa*) malloc(sizeof(Pessoa));
    p->ID = ID; 
    p->prox = NULL;
    if (fila == NULL){
        fila = p;
    }
    else{
        Pessoa *filaAuxiliar = fila;
        while (filaAuxiliar->prox != NULL){
            filaAuxiliar = filaAuxiliar->prox;
        }
        filaAuxiliar->prox = p;
    }
    
}


void remover(){
    if(fila == NULL){
        printf("A Fila esta vazia");
    }else{
        fila = fila->prox;
    }
}


void imprimir(Pessoa *f){
    if (f != NULL){
        printf("\nID da pessoa: %d",f->ID);
        imprimir(f->prox);
    }
}

int main(){
    add(1);
    add(2);
    add(3);
    Pessoa *filaAux = fila;
    imprimir(filaAux);
    add(4);
    add(5);
    remover(filaAux);
    printf("\n");
    filaAux = fila;
    imprimir(filaAux);
}
