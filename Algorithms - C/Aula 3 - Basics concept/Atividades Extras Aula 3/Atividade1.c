// 1. Faça um algoritmo para calcular quantas ferraduras são necessárias para equipar todos os
// cavalos comprados para um haras.
#include<stdio.h>

int main()
{

    int qtCavalos, resul;

    printf("Quantia de cavalos comprados: ");
    scanf("%d", &qtCavalos);

    resul = (qtCavalos*4);

    printf("ferraduras necessarias: %d", resul);
    return 0;
}