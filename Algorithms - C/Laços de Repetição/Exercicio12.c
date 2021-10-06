#include<stdio.h>

int main(){

    int input, soma = 0, cont = 0; 
    float mediaF;

    do
    {
        printf("Informe um numero: ");
        scanf("%d", &input);

        if(input > 0)
        {
            soma = soma + input;
        }
        cont++;
    } while (input>=0);
    
    mediaF = soma/(cont-1);

    printf("Somatorio total: %d \n", soma);
    printf("Media final: %.2f \n", mediaF);
    printf("Total de valores lidos: %d \n", cont);
    return 0;
}