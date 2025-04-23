#include <stdio.h>
#include <stdlib.h>

struct ponto{
    float x1,x2;
    struct ponto *prox;
};

typedef struct ponto Ponto;

Ponto *listaencadeada = NULL;// nucleo da lista, se perdemos ela, perdemos tudo literalmente

int lenght = 0;//vai selecionar a posição que vai entrar na lista// pode ser chamada de tamanho da lista

/*void add(float x1, float x2){
    Ponto *p = (Ponto*) malloc(sizeof(Ponto));// alocando memoria
    p -> x1 = x1;// aponta para x1 e recebe x1
    p -> x2 = x2;// ponta para x2 e recebe x2
    p -> prox = listaencadeada;// p aponta para prox entao prox é igual a lista encaeda e lista encadeada é igual a p
    // ou seja sempre que usarmos a funcao "add" lista sera a ultima que foi inserida e prox sera  a enserida anteriormente
    //
    listaencadeada = p;
}
*/

void imprimir(Ponto *p){
    Ponto *auxLista;//ponteiro auxiliar
    if (p != NULL){
        printf("\nx = %.1f   y = %.1f",p->x1,p->x2);
        imprimir(p->prox);

    }
}
/*
void addnofinal(float x1, float x2){
    Ponto *p = (Ponto*) malloc(sizeof(Ponto));
    p-> x1 = x1;
    p-> x2 = x2;
    p->prox = NULL;
    if (listaencadeada == NULL)//se a lista encadeada for igual a NULL ela vai passar a ser o inico da lista
    {
        listaencadeada->prox = p;//setanndo proximo 
    }else{
        Ponto *listaAux = listaencadeada;
        while (listaAux->prox != NULL)
        {
            listaAux = listaAux -> prox;
        }
        listaAux -> prox = p;
    }
    }
*/

void inseriremqualquerlugar(float x1, float x2, int index){//index e a posicao que sera colocada na lista
    Ponto *p = (Ponto*) malloc(sizeof(Ponto));
    p -> x1 = x1;
    p -> x2 = x2;
    if (index>lenght)//
    {
        printf("Posicao invalida");
        
    }else
    {
        if(index == 0){
            p -> prox = listaencadeada;// o antigo primeiro elemnto passa a ser o segundo 
            listaencadeada = p;// e o novo elemento vai passa a ser o primeiro
        }else{
            Ponto *ListaAux = listaencadeada;//ponteiro auxiliar
            int i = 0;//contador
            while(i != index-1){//preciso ter a referencia do anterior para apontar para o proximo
            
            ListaAux = ListaAux->prox;
            i++;
        }
        p->prox = ListaAux->prox;
        ListaAux->prox = p;
        }
        lenght ++;// aumenta o tamanho da lista
    }
    
    
    

}

/*void removerinsercao(int index){
    if (index > lenght || lenght == 0)
    {
        printf("O valor index é maior que o tamanho da lista, ERROR");
    }else{
        Ponto *Listaaux = listaencadeada;
        if(index == 0){
            listaencadeada = listaencadeada->prox;
        }else{
            Ponto *listaux = listaencadeada;
            while (i == listaux)
            {
            }
            
        }
    }
    
}
*/






int main(){
    inseriremqualquerlugar(1,4,0);
    inseriremqualquerlugar(2,3,1);
    inseriremqualquerlugar(3,2,2);

    Ponto *auxlista = listaencadeada;
    imprimir(auxlista);

    
    return 0;
}