#include<stdio.h>



int main(){

    float mat[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Informe um valor: ");
            scanf("%f", &mat[i][j]);
        }
        
    }

    printf("index 0 e 0: %.2f \n", mat[0][0]);
    printf("index 3 e 3: %.2f ", mat[2][2]);

    return 0;
}