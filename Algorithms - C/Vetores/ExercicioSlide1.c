#include<stdio.h>


int main(){

int vet[5];

for (int i = 0; i < 5; i++)
{
    printf("Valor: ");
    scanf("%d", &vet[i]);
}

for (int j = 0; j < 5; j++)
{
    printf("valores: %d\n", vet[j]);
}


    return 0;
}