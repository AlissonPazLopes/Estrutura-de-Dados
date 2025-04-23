#include <stdio.h>
#include <stdlib.h>

struct Lista_alunos
{  
    float nota;
    int idade;
    char nome[40];
    struct Lista_alunos *prox;
    
};

typedef struct Lista_alunos *ponto;

struct ponto *Lista_dos_alunos = NULL;
int tamanho;



void insercaoarbitraria(float nota, int idade, char nome[40],int tamanho){
    ponto *p = (ponto*) malloc(sizeof(ponto));
    p->nota = nota;
    p->nome = nome;


    if(tamanho == 0){
        ponto *listaaux = Lista_dos_alunos;
    
    }
}


int main(){
    
}