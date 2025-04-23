#include <stdio.h>
#include <stdlib.h>
struct Musicas{
    int ID_DA_PROXIMA_MUSICA;
    struct Musicas *prox;
};

typedef struct Musicas Musica;
Musica *fila = NULL;

void add(int ID_DA_PROXIMA_MUSICA){
    Musica *p = (Musica*) malloc(sizeof(Musica));
    p -> ID_DA_PROXIMA_MUSICA = ID_DA_PROXIMA_MUSICA;
    p -> prox = NULL;
    if (fila == NULL){   
        fila = p;

    }else{
        Musica *filaAux = fila;
        while (filaAux ->prox != NULL){
            filaAux = filaAux ->prox;
        }
        filaAux ->prox = p;
        
    }

    
}
void imprimir(Musica *music){
    if (music != NULL){
        printf("\nID da proxima musica: %d",music->ID_DA_PROXIMA_MUSICA);
        imprimir(music->prox);
    }else{
        printf("A fila esta vazia");
    }
}

int main(){
    return 0;
}
