#include <stdio.h>
#include <Stdlib.h>


typedef struct No
{
    int valor;
    struct No * prox;
}No;    

//lista vazia
No * inicio = NULL;
int tam;

void add(int valor, int pos){
    // 1 caso lista fazia
    No *novo = malloc(sizeof(No));
    novo ->valor = valor;
    novo -> prox = NULL;
    if(inicio == NULL){
        inicio = novo;
        //esta vazia e eu vou add no inicio


    }else if (pos == 0);

    {
        novo ->prox = inicio;
        inicio = novo;
    
    } else if (pos == tam)
    {
        
    }
    tam++;
    
}

//divisao e conquista

int main(){
    add(50 , 0);
    add(25, 0);
    add (30, 0);
    add(80, 3);
    return 0;
}