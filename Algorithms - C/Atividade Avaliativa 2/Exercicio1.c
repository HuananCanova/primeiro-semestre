#include<stdio.h>


int main(){

    float num, total = 0;

    //Loop para testar se a soma dos numeros digitados já ultrapassou o limite de 150;
    //total é iniciado com 0 para entrar no laço ao menos uma vez;
    while (total <= 150)
    {
        printf("Informe um valor: ");
        scanf("%f", &num);

        //cálculo do total digitado
        total = (total + num);
    }
    
    //Apresenta a soma total após ultrapassar o valor de 150;
    printf("Soma total: %.2f", total);


    return 0;
}