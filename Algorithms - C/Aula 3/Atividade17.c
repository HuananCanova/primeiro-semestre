//  17. Elaborar um programa que calcule o volume de uma caixa retangular.
#include<stdio.h>
#include<math.h>

int main(){

    float compr, larg, alt, vol;

    printf("Informe o comprimento: ");
    scanf("%f", &compr);
    printf("Informe a largura: ");
    scanf("%f", &larg);
    printf("Informe a altura: ");
    scanf("%f", &alt);
    printf("\n");

    vol = (compr * larg * alt);

    printf("Volume da caixa retangular: %.2f", vol);
    return 0;
}