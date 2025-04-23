#include <stdio.h>
#include <stdlib.h>

struct ponto{
    float x1,x2;
    struct ponto *prox;
};

typedef struct ponto Ponto;

Ponto *listaencadeada;// nucleo da lista, se perdemos ela, perdemos tudo literalmente// aponta para o inicio da lista


void addnoinicio(float x1, float x2){
    Ponto *p = (Ponto*) malloc(sizeof(Ponto));// alocando memoria
    p -> x1 = x1;// aponta para x1 e recebe x1
    p -> x2 = x2;// ponta para x2 e recebe x2
    p -> prox = listaencadeada;// p aponta para prox entao prox é igual a lista encaeda e lista encadeada é igual a p
    // ou seja sempre que usarmos a funcao "add" lista sera a ultima que foi inserida e prox sera  a enserida anteriormente
    //
    listaencadeada = p;
}


void addnofinal(float x1, float x2){
    Ponto *p = (Ponto*) malloc(sizeof(Ponto));
    p -> x1;
    p -> x2;
    p->prox = NULL;
    
    if(listaencadeada == NULL)
    {
        listaencadeada =p;
    }else{
        Ponto *auxLista = listaencadeada;
        while (auxLista->prox != NULL)
        {
            auxLista = auxLista->prox;
        }
        auxLista->prox = p;
    }

}









/*void imprimir(){
    Ponto *auxLista = listaencadeada;
    while(auxLista != NULL){//se for diferente de NULL ele printa, 
        printf("\n\nO numero atual de x1 = %.1f O numero atual de x2 = %.1f",auxLista->x1, auxLista->x2);//
        auxLista = auxLista->prox;//sempre que o loop é feito, auxlista recebe proximo, assim no proximo lopp ela ira printa o proximo da lista

    }
}
*/
//vamos criar uma recursividade
// por isso tiramaos a funcao imprimir

void imprimir(Ponto *p){   // termina quando o p aponte para null
    if (p != NULL)
    {
        printf("\nx = %.1f   y = %.1f",p->x1,p->x2);
        imprimir(p->prox);//chama a função para o proximo ponto, ate que 
    }
    
    
}


int main(){
    addnoinicio(2,3);
    addnoinicio(3,4);
    //imprimir();//funcao imprime os todos os valores que foram feitos add 
    Ponto *auxlista;
    imprimir(auxlista);
    return 0;
}