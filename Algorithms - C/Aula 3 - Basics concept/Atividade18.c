// 18. Elaborar um programa que apresente o valor da conversão em real (R$) de um valor lido em dólar (US$). O
// programa deve solicitar o valor da cotação do dólar e também a quantidade de dólares disponível com o
// usuário.
#include<stdio.h>

int main()
{

    float cotacao, real, qtDolar;

    printf("Valor da cotacao: ");
    scanf("%f", &cotacao);

    printf("Quantos dolares: ");
    scanf("%f", &qtDolar);

    real = (qtDolar*cotacao);

    printf("Valor em reais: %.3f", real);

    return 0;    
}