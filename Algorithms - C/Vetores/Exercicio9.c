#include<stdio.h>

void vetorCheques(int num){

    float valoresVet[num], mediaValores = 0.0, maior = 0, menor = 999999;

    for (int i = 0; i < num; i++)
    {   
        printf("Valor: ");
        scanf("%f", &valoresVet[i]);

        if (valoresVet[i] > maior)
        {
            maior = valoresVet[i];
        }
        if (valoresVet[i] < menor)
        {
            menor = valoresVet[i];
        }

        mediaValores = (mediaValores + valoresVet[i]);
        
        
    }

    mediaValores = (mediaValores/num);

    printf("\nLista de valores\n");
    for (int j = 0; j < num; j++)
    {
        printf("Cheque %d: %.2f\n", j, valoresVet[j]);
    }
    
        printf("\nMedia dos valores: %.2f\n", mediaValores);
        printf("\nMaior valor: %.2f\n", maior);
        printf("\nMenor valor: %.2f\n", menor);



}

//  printf("Cheque %d: %.2f\n", i, valoresVet[i]);

int main(){

    int n;

    printf("Numero de cheques usados: ");
    scanf("%d", &n);

    vetorCheques(n);
    return 0;
}