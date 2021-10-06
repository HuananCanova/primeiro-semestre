#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float temp;

    printf("Informe a temperatura em celsius: \n");
    scanf("%f",&temp);

    if(temp>=37.5){
        printf("Você está com febre.");
    } else {
        printf("Não está com febre.");
    }
    
    return 0;
}