#include <stdio.h>
#include <stdlib.h>


//tad 
// uso de ponteiros


struct cartao_de_credito
{
    int numero;
    int cvc;
    int validade_mes;
    int validade_ano;
    char* cliente;// ponteiro de caracteres, ponteiro guarda endereço de memoria.
    struct cartao_de_credito * prox;

};



int main(){
    
    return 0;
}


//malloc(sizeof) aloque espaço de tamanho de uma variavel;
//fazer o 2 e o 4 e 5;