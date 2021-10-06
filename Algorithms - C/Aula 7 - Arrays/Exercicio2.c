#include<stdio.h>


int main(){

    int vetA[5], vetB[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Valor: ");
        scanf("%d", &vetA[i]);
    }



    for (int j = 0; j < 5; j++)
    {   
        printf("Vetor A - %d: %d\n", j, vetA[j]);
        vetB[j] = (vetA[j] + vetA[j]);
        printf("Vetor B - %d: %d\n", j, vetB[j]);
    }
    

    return 0;
}