#include <stdio.h>

int *p;
int valor = 5;

int main(){

    p = &valor;//p esta apontando para endereço pois tem o "&"
    printf("O valor apontado por p e %d",*p);

}