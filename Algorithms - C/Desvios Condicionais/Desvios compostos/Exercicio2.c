#include<stdio.h>

int main(){

    float nota1, nota2, media;

    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);


    media = (nota1+nota2)/2;

    if(media>=7){
        printf("Aprovado");
    }
    else{
        printf("Reprovado");
    }

    return 0;
}