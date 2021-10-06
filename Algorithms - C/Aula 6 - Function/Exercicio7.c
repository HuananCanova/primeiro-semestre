#include<stdio.h>
#include"Exercicio7bib.h"


int main()
{
    int qtd, desc;
    float valor, valorDesc, totalPagar;

    printf("Valor do produto: ");
    scanf("%f", &valor);
    printf("Desconto (porcentagem) 0-100: ");
    scanf("%d", &desc);
    printf("Quantia do produto: ");
    scanf("%d", &qtd);

    valorDesc = desconto(valor, desc);

    totalPagar = valorTotal(qtd, valor, valorDesc);

    printf("Preco original: %.2f \n", valor);
    printf("Desconto: %.2f \n", valorDesc);
    printf("Valor total da venda: %.2f", totalPagar);
    return 0;
}