#include<stdio.h>
#include<math.h>


int main(){

    float peso, altura, imc;

    printf("Informe a altura: ");
    scanf("%f", &altura);
    fflush(stdin);
    printf("Informe o peso: ");
    scanf("%f", &peso);

    imc = (peso/pow(altura, 2));

    printf("\nimc: %f\n", imc);

    if(imc>=0 && imc<18.5){
        printf("ABAIXO DO PESO");
    } else if(imc>=18.5 && imc<25){
        printf("NORMAL");
    } else if(imc>=25 && imc<30){
        printf("PRE-OBESO");
    } else if(imc>=30 && imc<35){
        printf("OBESO CLASSE I");
    } else if(imc>=35 && imc<40){
        printf("OBESO CLASSE II");
    } else {
        printf("OBESO CLASSE III");
    }
    
    return 0;
}