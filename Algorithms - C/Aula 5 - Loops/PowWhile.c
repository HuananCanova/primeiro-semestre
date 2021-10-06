#include<stdio.h>

int main(){

    int base, exp, resul, i=1;
    
    printf("Informe um numero para a base: ");
    scanf("%d", &base);
    printf("Informe um numero para o exponente: ");
    scanf("%d", &exp);
    
    resul = base;
    while(i<exp){
    resul = (resul*base);
    i++;
    }
    printf("%d", resul);

    
    return 0;
    }