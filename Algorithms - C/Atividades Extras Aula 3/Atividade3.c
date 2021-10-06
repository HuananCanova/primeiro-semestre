// 3. Escreva um algoritmo para ler o nome e a idade de uma pessoa, e exibir quantos dias de vida
// ela possui. Considere sempre anos completos, e que um ano possui 365 dias. Ex: uma pessoa
// com 19 anos possui 6935 dias de vida; veja um exemplo de saída: MARIA, VOCÊ JÁ
// VIVEU 6935 DIAS 
#include<stdio.h>

int main()
{

    int idade, dias;
    char nome[10];

    printf("Informe o nome: ");
    scanf("%s", &nome);

    printf("Informe a idade: ");
    scanf("%d", &idade);

    dias = (idade * 365);

    printf("%s, VOCE JA VIVEU %d DIAS: ", nome, dias);

    return 0;
}