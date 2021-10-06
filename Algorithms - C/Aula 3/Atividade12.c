// 12. Ler a temperatura em graus Celsius e apresentá-la convertida em Fahrenheit. A fórmula de conversão é:
// Fahrenheit = (9 x Celsius + 160)/5

#include<stdio.h>

int main()
{
    float temp, fahr;

    printf("Informe a temperatura em graus celsius: ");
    scanf("%f", &temp);

    fahr = (9*temp + 160)/5;

    printf("Temperatura em fahrenheit: %.2f", fahr);
    return 0;
}