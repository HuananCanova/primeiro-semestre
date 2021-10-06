// 4. Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um algoritmo para
// ler o preço do litro da gasolina e o valor do pagamento, e exibir quantos litros ele conseguiu
// colocar no tanque.
#include<stdio.h>

int main()
{

    float pLitro, pagamento, qtLitro;

    printf("Preco da gasolina/litro: ");
    scanf("%f", &pLitro);

    printf("Quantos reais de gasolina deseja colocar: ");
    scanf("%f", &pagamento);

    qtLitro = (pagamento/pLitro);

    printf("Litros: %.2f",qtLitro);

    return 0;
}