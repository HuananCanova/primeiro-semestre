#include<stdio.h>

int main(){

    float km, tempo, velMedia;


    printf("Distância em km: ");
    scanf("%f", &km);
    printf("Tempo de viagem em horas: ");
    scanf("%f", &tempo);


    velMedia = km/tempo;

    velMedia >= 110? printf("VELOCIDADE M. SUPERIOR A 110KM %.2f", velMedia) : printf("VELOCIDADE INFERIOR A 110KM %.2f", velMedia);

    return 0;
}