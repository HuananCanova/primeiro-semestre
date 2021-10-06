#include<stdio.h>


int main(){

    int matA[2][2], matB[2][2], matC[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Informe um valor Matriz A: ");
            scanf("%d", &matA[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Informe um valor Matriz B: ");
            scanf("%d", &matB[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matC[i][j] = (matA[i][j] + matB[i][j]);
            printf("%d ", matC[i][j]);
        }
    }



    return 0;
}