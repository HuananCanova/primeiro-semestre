// 5. O restaurante a quilo Bem-Bão cobra R$12,00 por cada quilo de refeição. Escreva um
// algoritmo que leia o peso do prato montado pelo cliente (em quilos) e imprima o valor a
// pagar. Assuma que a balança já desconte o peso do prato.
#include<stdio.h>

int main()
{

    float kg, peso, resul;
    kg = 12;
    printf("Peso do prato (quilos): ");
    scanf("%f", &peso);

    resul = (kg * peso);

    printf("Total a pagar: %.2f", resul);

    return 0;
}