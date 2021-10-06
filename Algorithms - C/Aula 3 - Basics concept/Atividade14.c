// 14. Ler dois valores para as variáveis A e B, e efetuar a troca dos valores de forma que a variável A 
// passe apossuir o valor da variável B e a variável B passe a possuir o valor da variável A. 
// Apresentar os valores trocados.
#include<stdio.h>

int main()
{
    int a, b, sup;

    printf("Informe o valor de A: ");
    scanf("%d", &a);

    printf("Informe o valor de B: ");
    scanf("%d", &b);

    sup = b;
    b = a;
    b = sup;
    
    printf("Valor de A: %d \n", b);
    printf("Valor de B: %d", a);

}