#include<stdio.h>

int main(){

    int mat[5][5], total = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Informe um valor: ");
            scanf("%d", &mat[i][j]);
        }
        
    }

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //        if (i == j)
    //        {
    //            total= total + mat[i][j];
    //        }
    //     }
        
    // }

    for (int i = 0; i < 5; i++)
    {
        total = total + mat[i][i];
    }
    
    
    printf("Soma total da daigonal principal: %d", total);


    return 0;
}