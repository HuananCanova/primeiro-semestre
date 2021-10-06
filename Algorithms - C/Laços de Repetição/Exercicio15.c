#include<stdio.h>

int main(){

    int num, maior, menor, contFem = 0, cont = 0, soma, media;
    
    do
    {
        printf("Informe um numero: ");
        scanf("%d", &num);

        if(num < 0)
        {
            contFem++;
        } else if(num > 0)
        {
            soma = (soma + num);
            cont++;
        }

    } while (num != 0);
    
    media = soma/cont;
    
    printf("Numeros negativos: %d\n", contFem); 
    printf("Media: %d", media);     

    return 0;
}