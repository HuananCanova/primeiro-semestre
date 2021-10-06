#include<stdio.h>


int main(){

    int matA[5][5], matB[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Informe um valor: ");
            scanf("%d", &matA[i][j]);
        }
        
    }

    printf("Matriz B: ");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i != j)
            {
                matB[i][j] = (matA[i][j] * matA[i][j]);
            }else{
                matB[i][j] = (matA[i][j] * matA[i][j] * matA[i][j]);
            }
            
            printf("%d ", matB[i][j]);
        }
        
    }

    return 0;
}