#include<stdio.h>

int main(){

    int idade, falta;

    printf("informe a idade: ");
    scanf("%d", &idade);

    falta = 16 - idade;

    if(idade >= 16){
        printf("pode votar!");
    } else {
        printf("Ainda nao pode votar! faltam %d anos para poder votar", falta);
    }

    return 0;
}