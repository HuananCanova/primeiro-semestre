#include<stdio.h>

int main(){

    int l, c;
    float mat[4][3];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Informe um valor L(%d) C(%d): ", i, j);
            scanf("%f", &mat[i][j]);
        }
        
    }
    
    
        int cicle = 0;
        while (cicle == 0)
        {
            printf("Informe a Linha(0,1,2,3) e a Coluna(0,1,2): \n");
            scanf("%d %d",&l ,&c);

            if ((l>=0 && l<=3) && (c>=0 && c<=2))
            {
                printf("Valor: %.2f", mat[l][c]);
                cicle++;
            }else{
                printf("Opcao invalida\n");
            }
        }

    return 0;
}