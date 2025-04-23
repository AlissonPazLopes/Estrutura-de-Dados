#include <stdio.h>

int matriz[2][2];// 1 linahs dps colunas// exemp
// no for embaixo o i = as linhas e o j = as colunas
//se fosse matriz[2][4]
// seria i < 2 e j < 4


int main(){

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("\nDIgite um numero: ");
            scanf("%d",&matriz[i][j]);
        }
        
    }
     for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("\nO valor de matriz[%d][%d] e = %d",i,j,matriz[i][j]);
            
        }
        
    }

    char vogais[2][2] = {{'a','b','c'},{'d','e','f'}};
    for(int i = 0;  i< 2; i++ )
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Digite um nome: ");
            scanf("%s",&vogais);
        }
        
    }






    return 0;
}


























