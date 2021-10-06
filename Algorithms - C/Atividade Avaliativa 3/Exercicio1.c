#include<stdio.h>
#include "Exercicio1bib.h"

void calculaMatriz(int n);

int main(){

    int n;
    printf("Informe o valor de N: ");
    scanf("%d", &n);

    //chamada da função passando o tamanho da matriz por parâmetro
    calculaMatriz(n);

    return 0;
}