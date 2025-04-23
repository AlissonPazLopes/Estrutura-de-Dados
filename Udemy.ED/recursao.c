#include <stdio.h>


int potencia(int base, int expoente){
    if(expoente == 1){
        return base;
    }

    return base*potencia(base, expoente-1);

}



int main(){
    int v = potencia(3,2);
    printf("\n%d\n\n",v);
    return 0;
}