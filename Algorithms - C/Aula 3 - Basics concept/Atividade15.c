// 15. Calcular a quantidade de litros de combustível gasta em uma viagem, utilizando um automóvel que faz 12km
// por litro. Para obter o cálculo, o usuário deve fornecer o tempo gasto e a velocidade média durante a
// viagem. Desta forma, será possível obter a distância percorrida com a fórmula:
// distância = tempo x velocidade
#include<stdio.h>

int main()
{

    float tempo, velMedia, dist, litros;
    

    printf("Informe o tempo gasto: ");
    scanf("%f", &tempo);

    printf("Informe o valoidade média: ");
    scanf("%f", &velMedia);

    dist = (tempo * velMedia);

    litros = (dist / 12);

    printf("Quantidade de gasolina gasta: %.2f", litros);
    return 0;
}