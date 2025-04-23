#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct No {
    int valor;
    struct No *dir;
    struct No *esq;
} No;

No *raiz = NULL;

// Função de busca para encontrar onde inserir o novo nó
No *buscar(int valor, No *aux) {
    if (aux == NULL) {
        return NULL;
    } else if (valor == aux->valor) {//se o valor for igual ao valor do nó
        return aux;
    } else if (valor < aux->valor) {//se o valor for menor que o valor do nó
        if (aux->esq != NULL) {
            return buscar(valor, aux->esq);
        } else {
            return aux; // Pai do elemento se ele existisse
        }
    } else {
        if (aux->dir != NULL) {
            return buscar(valor, aux->dir);//busca o valor na direita
        } else {
            return aux;
        }
    }
}

// Função para adicionar um novo valor à árvore
void add(int valor) {
    No *novo = (No *)malloc(sizeof(No));
    novo->valor = valor;//novo nó recebe o valor
    novo->esq = NULL;//novo nó recebe NULL
    novo->dir = NULL;//novo nó recebe NULL

    No *aux = buscar(valor, raiz);//aux recebe o valor de buscar(valor, raiz)
    if (aux == NULL) {
        raiz = novo;
    } else if (aux->valor == valor) {
        printf("Adição impossível, chave duplicada: %d\n", valor);
        free(novo);
    } else if (valor < aux->valor) {
        aux->esq = novo;//aux->esq recebe o novo nó
    } else {
        aux->dir = novo;//aux->dir recebe o novo nó
    }
}
// Função para imprimir a árvore em Pré-Ordem
void imprimir_pre_ordem(No *aux) {
    if (aux != NULL) {
        printf("%d ", aux->valor);
        imprimir_pre_ordem(aux->esq);//imprime a árvore em pré-ordem
        imprimir_pre_ordem(aux->dir);//imprime a árvore em pré-ordem
    }
}
// Função para imprimir a árvore em In-Ordem
void imprimir_in_ordem(No *aux) {
    if (aux != NULL) {
        imprimir_in_ordem(aux->esq);//imprime a árvore em in-ordem
        printf("%d ", aux->valor);
        imprimir_in_ordem(aux->dir);//imprime a árvore em in-ordem
    }
}
// Função para imprimir a árvore em Pós-Ordem
void imprimir_pos_ordem(No *aux) {
    if (aux != NULL) {
        imprimir_pos_ordem(aux->esq);//imprime a árvore em pós-ordem
        imprimir_pos_ordem(aux->dir);//imprime a árvore em pós-ordem
        printf("%d ", aux->valor);
    }
}
int main() {
    srand(time(NULL)); // Inicializa o gerador de números aleatórios
    printf("Inserindo 20 valores aleatórios na Árvore Binária de Busca:\n");
    for (int i = 0; i < 20; i++) {
        int valor = rand() % 100; // Gera números aleatórios entre 0 e 99
        add(valor);//adiciona o valor
        printf("%d ", valor);//imprime o valor
    }
    printf("\n\nPercurso Pré-Ordem: ");
    imprimir_pre_ordem(raiz);//imprime a árvore em pré-ordem
    printf("\nPercurso In-Ordem: ");
    imprimir_in_ordem(raiz);//imprime a árvore em in-ordem
    printf("\nPercurso Pós-Ordem: ");
    imprimir_pos_ordem(raiz);//imprime a árvore em pós-ordem
    printf("\n");
    return 0;
}
