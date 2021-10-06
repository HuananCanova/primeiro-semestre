#include<stdio.h>


int main(){

    int vetA[5], vetB[5], matC[5][2];

    for (int i = 0; i < 5; i++)
    {
        printf("Informe um valor vetA: ");
        scanf("%d", &vetA[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Informe um valor vetB: ");
        scanf("%d", &vetB[i]);
    }
    

    printf("\nMatriz C: \n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (j == 0)
            {
                matC[i][j] = vetA[i];
            }else{
                matC[i][j] = vetB[i];
            }
            printf("%d ", matC[i][j]);
        }
        printf("\n");
    }
    


    return 0;
}