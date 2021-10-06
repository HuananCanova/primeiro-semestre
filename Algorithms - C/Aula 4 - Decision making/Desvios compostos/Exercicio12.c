#include<stdio.h>


int main(){

   int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    if(num < 0){
        printf("Numero negativo");
    } else if( num == 0){
        printf("Zero");
    } else {
        if(num%2==0){
            printf("Numero positivo e par");
        } else {
            printf("Numero positivo e impar");
        }
    }
    
    return 0;
}