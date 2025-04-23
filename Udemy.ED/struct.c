#include <stdio.h>

typedef struct pessoa
{
    int idade;
    float altura;
    float peso;
}Pessoa;



int main(){
    Pessoa p;
    p.altura = 1.80;
    p.idade = 17;
    p.peso = 82,56;
    printf(" O valor de altura = %.2f\n",p.altura);
    printf(" O valor de idade = %d\n",p.idade);
    printf(" O valor do peso = %.2f \n",p.peso);

    return 0;
}