#include<stdio.h>

void terceiroVet();

int main(){

    float vetA[6], vetB[6];

    for (int i = 0; i < 6; i++)
    {
        printf("Valor vetA: ");
        scanf("%f", &vetA[i]);
    }

    for (int j = 0; j < 6; j++)
    {
        printf("Valor vetB: ");
        scanf("%f", &vetB[j]);
    }

    terceiroVet(vetA, vetB);

    return 0;
}

void terceiroVet(float vetA[6], float vetB[6]){
   
    float vetC[6];

    for (int i = 0; i < 6; i++)
    {
        if (vetA[i] == vetB[i])
        {
            vetC[i] = 1;
            printf("Vetor C - %d: %.0f\n", i, vetC[i]);
        }else{
            vetC[i] = 0;
            printf("Vetor C - %d: %.0f\n", i, vetC[i]);
        }
        
    }
    
}