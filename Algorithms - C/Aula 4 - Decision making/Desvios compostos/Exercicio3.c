#include<stdio.h>

int main(){

    float km, tempo, velMedia;


    printf("Distância em km: ");
    scanf("%f", &km);
    printf("Tempo de viagem em horas: ");
    scanf("%f", &tempo);


    velMedia = km/tempo;

    if(velMedia>=110){
        printf("Velocidade superior a 110 km %.2f", velMedia);
    }else {
        printf("Velocidade inferior a 110 km %.2f", velMedia);
    }

    return 0;
}