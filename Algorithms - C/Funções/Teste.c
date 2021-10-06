#include<stdio.h>

int main()
{
    int qtd, desc;
    float valor, valorFinal, totalPagar;

    printf("Valor do produto: ");
    scanf("%f", &valor);
    printf("Desconto (porcentagem) 0-100: ");
    scanf("%d", &desc);
    printf("Quantia do produto: ");
    scanf("%d", &qtd);

    valorFinal = valor - (desc/100);  


    printf("Preco original: %.2f \n", valor);
    printf("Preco com desconto: %.2f \n", valorFinal);
    printf("Valor total da venda: %.2f", totalPagar);
    return 0;
}