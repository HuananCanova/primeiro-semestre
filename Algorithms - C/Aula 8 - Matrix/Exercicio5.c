#include<stdio.h>


int main(){

    int mat[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            mat[i][j] = (i+j);
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    


    return 0;
}