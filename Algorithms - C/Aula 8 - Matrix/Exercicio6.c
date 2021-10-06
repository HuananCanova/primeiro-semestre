#include<stdio.h>


int main(){

    int mat[3][4], totalVenda = 0, vendaMes = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            printf("Quantia barris (produto %d) (mes %d): ", (i+1), (j+1));
            scanf("%d", &mat[i][j]);

            totalVenda = totalVenda + mat[i][j];
        }
            printf("Venda anual (produto %d): %d\n", (i+1), totalVenda);
            totalVenda = 0;
    }

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            vendaMes = vendaMes + mat[j][i];
        }
        printf("Vendas mes %d: %d \n", (i+1), vendaMes);
        vendaMes = 0;
    }
    
    
    



    return 0;
}