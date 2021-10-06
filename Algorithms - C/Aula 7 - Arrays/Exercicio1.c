#include<stdio.h>


int main(){

int vet[15], totalVet = 0;
int cont = 0;

for (int i = 0; i < 15; i++)
{
    printf("Valor: ");
    scanf("%d", &vet[i]);
    
    if(vet[i] > 5){
    cont++;
    }
}


    printf("Maiores que cinco: %d", cont);

    return 0;
}
