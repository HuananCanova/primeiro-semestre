#include<stdio.h>
#include"Exercicio5bib.h"

int main()
{
    float media, n1, n2, n3;
    
    printf("Informe a nota 1: ");
    scanf("%f", &n1);
    printf("Informe a nota 2: ");
    scanf("%f", &n2);
    printf("Informe a nota 3: ");
    scanf("%f", &n3);
    fflush(stdin);
    

    media = mediaFinal (n1, n2, n3);

    printf("Media final: %.2f", media);
    return 0;
}