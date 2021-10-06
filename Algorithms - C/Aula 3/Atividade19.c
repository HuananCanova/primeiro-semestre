// 19. Desenvolver um programa que leia três valores inteiros e apresente como resultado o valor 
// da soma dos quadrados dos três valores lidos
#include<stdio.h>
#include<math.h>

int main()
{

    int a, b, c, soma;

    printf("Valor a: ");
    scanf("%d", &a);

    printf("Valor b: ");
    scanf("%d", &b);

    printf("Valor c: ");
    scanf("%d", &c);

    a = pow(a,2);
    b = pow(b,2);
    c = pow(c,2);

    soma = (a+b+c);

    printf("Valor da soma dos quadrados: %d", soma);

    return 0;
}