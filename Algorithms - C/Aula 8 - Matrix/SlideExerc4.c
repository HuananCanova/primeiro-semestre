#include<stdio.h>

int main(){

    int matA[2][3], matB[2][3];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Informe um valor: ");
            scanf("%d", &matA[i][j]);
        }
        
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matB[i][j] = matA[i][j];
        }
    }
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matB[i][j]);
        }
        printf("\n");
    }



    return 0;
}