#include<stdio.h>


int main(){

    int mat[2][3];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Informe um valor: ");
            scanf("%d", &mat[i][j]);
        }
        
    }
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {   
            if (mat[i][j] % 2 == 0)
            {
                printf("%d ", mat[i][j]);
            }
            
        }
        printf("\n");
    }
    


    return 0;
}