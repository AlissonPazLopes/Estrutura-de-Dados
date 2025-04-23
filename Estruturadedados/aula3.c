#include <stdio.h>
#include <stdlib.h>
/*
                   
         criando listas


*/
typedef struct caixa {

    int cod;
    float preco;
    float peso;
    struct  caixa * prox;

}Produto;



Produto * constroindo_produtos(int cod, float peso, float preco){
    Produto * novo =  malloc(sizeof(Produto));//esssa funcao mallocm, esta pedindo para alocar um pedaço de memoria
    novo ->cod= cod;
    novo -> peso = peso;
    novo -> preco = preco;
}





int main(){
    Produto p1;
    p1.cod = 111;
    p1.preco  = 111;
    p1.peso = 111;


    Produto p2;
    p2.cod = 222;
    p2.preco = 222;
    p2.peso = 222;


    Produto p3;
    p3.cod = 333;
    p3.preco = 333;
    p3.peso = 333;

    p1.prox = &p2;
    p2.prox = &p3;
    p3.prox = NULL;



    return 0;
}