#include <stdio.h>
#include <stdlib.h>

/*
Implementar a função remover da árvore binária de busca, apresentar a criação de uma árvore
com 30 nós, removendo 10 nós, considere remoção de folhas, nós com 1 filhos e nós com 2 filhos.
*/

// Estrutura de um nó da árvore
typedef struct No {
    int numero;
    struct No *direita;
    struct No *esquerda;
} No;

// Raiz da árvore
No *raiz = NULL;

// para achar o nó com o número
No *achar_no(int numero, No *aux) {
    if (aux == NULL || aux->numero == numero) {
        return aux;
    } else if (numero < aux->numero) {
        return achar_no(numero, aux->esquerda);
    } else {
        return achar_no(numero, aux->direita);
    }
}

// insere um nó na na nossa arvore
void insere_no(int numero) {
    No *novo = malloc(sizeof(No));
    novo->numero = numero;
    novo->esquerda = NULL;
    novo->direita = NULL;
    if (raiz == NULL) {
        raiz = novo;
        return;
    }
    No *aux = raiz, *pai = NULL;
    while (aux != NULL) {
        pai = aux;
        if (numero < aux->numero)
            aux = aux->esquerda;
        else if (numero > aux->numero)
            aux = aux->direita;
        else {
            free(novo);
            return;
        }
    }
    if (numero < pai->numero)
        pai->esquerda = novo;
    else
        pai->direita = novo;
}


// pega o menor nó da nossa arvor e retorna ele
No *pega_menor(No *aux) {
    while (aux->esquerda != NULL) {
        aux = aux->esquerda;
    }
    return aux;
}


// deleta um nó da nossa arvore e 
// retorna a raiz da arvore
No *deleta_no(No *raiz, int numero) {
    if (raiz == NULL)// se a raiz for nula
        return NULL;
    if (numero < raiz->numero)// se o numero for menor que a raiz
    {
        raiz->esquerda = deleta_no(raiz->esquerda, numero);
    } else if (numero > raiz->numero)// se o numero for maior que a raiz 
    {
        raiz->direita = deleta_no(raiz->direita, numero);
    } else {
        if (raiz->esquerda == NULL)// se a raiz da esquerda for nula 
        {
            No *temp = raiz->direita;
            free(raiz);
            return temp;
        } else if (raiz->direita == NULL)// se a raiz da direita for nula
         {
            No *temp = raiz->esquerda;
            free(raiz);
            return temp;
        }
        No *temp = pega_menor(raiz->direita);
        raiz->numero = temp->numero;
        raiz->direita = deleta_no(raiz->direita, temp->numero);
    }
    return raiz;
}

// destroi a arvore kakakaka destroi arvore
void destroi_arvore(No *aux) {
    if (aux != NULL) {
        destroi_arvore(aux->esquerda);
        destroi_arvore(aux->direita);
        free(aux);
    }
}
// exibe a arvore 
void exibir_arvore(No *aux) {
    if (aux != NULL) {
        exibir_arvore(aux->esquerda);
        printf("%d ", aux->numero);
        exibir_arvore(aux->direita);
    }
}

int main() {
    int valores[30] = {45, 20, 75, 15, 35, 65, 85, 5, 18, 28, 38, 58, 78, 88, 95,
                       3, 12, 24, 32, 42, 52, 68, 72, 82, 92, 99, 10, 26, 48, 66};// valores da arvore
    for (int i = 0; i < 30; i++) {
        insere_no(valores[i]);
    }
    
    printf("Arvore antes da remocao:\n");
    exibir_arvore(raiz);
    printf("\n");
    // valores a serem removidos, nao gosto desses numero ai
    int remover_valores[10] = {45, 20, 75, 5, 38, 58, 78, 88, 10, 99};
    for (int j = 0; j < 10; j++) {// removendo os valores
        raiz = deleta_no(raiz, remover_valores[j]);
    }
    
    printf("Arvore apos a remocao:\n");
    exibir_arvore(raiz);// exibindo a nossa arvore
    printf("\n");
    // destruindo a nossa arvore
    destroi_arvore(raiz);
    raiz = NULL;
    
    return 0;
}
