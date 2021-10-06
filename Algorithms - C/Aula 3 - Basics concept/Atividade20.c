// 20. Desenvolver um programa que leia três valores inteiros e apresente como resultado o valor do quadrado da
// soma dos três valores lidos.
#include<stdio.h>
#include<math.h>
int main()
{

    int a, b ,c, soma, quadrado;

    printf("Informe a: ");
    scanf("%d", &a);
    printf("Informe b: ");
    scanf("%d", &b);
    printf("Informe c: ");
    scanf("%d", &c);
    printf("\n");

    soma = (a+b+c);

    quadrado = pow(soma, 2);

    printf("Valor soma final: %d", quadrado);
    return 0;
}