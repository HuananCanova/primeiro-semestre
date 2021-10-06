// 11. Elaborar um programa que leia dois valores e apresente os resultados das quatro operações aritméticas
// básicas.
#include<stdio.h>

int main()
{
    float num1, num2, result;

    printf("Informe um valor: ");
    scanf("%f", &num1);

    printf("Informe outro valor: ");
    scanf("%f", &num2);

    //Soma
    result = (num1+num2);
    printf("Soma: %.2f \n", result);
    //Subtração
    result = (num1-num2);
    printf("Subtracao: %.2f \n", result);
    //Multiplicação
    result = (num1*num2);
    printf("multiplicacao: %.2f \n", result);
    //Divisão
    result = (num1/num2);
    printf("divisao: %.2f \n", result);
    return 0;
}