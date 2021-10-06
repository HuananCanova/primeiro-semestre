#include<stdio.h>


int main(){

    int n;
    
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);

    float vet[n], vetB[n];

    for (int i = 0; i < n; i++)
    {
        printf("Valor: ");
        scanf("%f", &vet[i]);
    }

   for (int j = (n-1); j >= 0; j--)
    {
        vetB[j] = vet[j];
        printf("Vetor B - %d: %.2f\n", j, vetB[j]);
    }

    return 0;
}