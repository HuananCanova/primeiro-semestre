#include<stdio.h>


int main(){
    //Linha[5] = delegação Coluna[10] = número de atletas;
    float matriz[5][10], maior = 0; 

    for (int  i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("Alturas delegacao (%d): ", (i+1));
            scanf("%f", &matriz[i][j]);
        }
        
    }

    for (int  i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
            }
        }
        printf("\nMaior altura delegacao (%d): %.2f", (i+1), maior);
        maior = 0;
    }
    

    return 0;
}