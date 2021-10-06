#include<stdio.h>

int main(){

    char status;

    printf("Informe o status da luz (l) para ligado e (d) para desligado ");
    scanf("%c", &status);

    if(status == 'l'){
        printf("Luz acesa");
    } 
    else if(status == 'd'){
        printf("Luz desligada");
    } 
    else{
        printf("ERRO - VALOR INVALIDO! Opcoes validas (l) e (d)");
    }

    return 0;
}