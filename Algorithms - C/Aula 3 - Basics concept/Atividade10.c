// 10. Ler um número inteiro e apresentar o quadrado deste número.
#include<stdio.h>
#include<math.h>

int main()
{
    int num;
    float result;

    printf("Valor: \n");
    scanf("%d", &num);

    result = pow(num, 2);

    printf("Quadrado: %.2f", result);

    return 0;
    
}