#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float temp;

    printf("Informe a temperatura em celsius: \n");
    scanf("%f",&temp);

    temp <= 37.5? printf("Nao esta com febre!") : printf("Esta com febre");
    
    return 0;
}