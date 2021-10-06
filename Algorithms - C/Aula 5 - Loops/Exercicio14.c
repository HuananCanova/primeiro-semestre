#include<stdio.h>

int main(){

    int num, maior = 0, menor = 28000;

    do
    {
        printf("Informe um numero: ");
        scanf("%d", &num);

        if(num < menor && num > 0)
        {
            menor = num;
        }
        if (num > maior)
        {
            maior = num;
        }
        
    } while (num >= 0);
    
    
    printf("Maior numero: %d\n", maior); 
    printf("Menor numero: %d", menor);     

    return 0;
}