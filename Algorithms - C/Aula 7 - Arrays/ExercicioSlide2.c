#include<stdio.h>


int main(){

int vet[5], totalVet = 0;

for (int i = 0; i < 5; i++)
{
    printf("Valor: ");
    scanf("%d", &vet[i]);
    
    totalVet = totalVet + vet[i]; 
}

    printf("Soma vetor: %d", totalVet);

    return 0;
}