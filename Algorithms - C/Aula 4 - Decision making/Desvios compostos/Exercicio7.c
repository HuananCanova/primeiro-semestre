#include<stdio.h>

int main(){

    int num1, num2;

    printf("Informe um numero: ");
    scanf("%d", &num1);
    
    printf("Informe um numero: ");
    scanf("%d", &num2);

    if(num1%2==0 && num2%2==0){
        printf("Os dois sao pares");
    } else if(num1%2==1 && num2%2==1){
        printf("Os dois sao impares");
    } else if(num1%2==0 && num2%2==1){
        printf("Primeiro e par e o segundo impar");
    } else {
        printf("Primeiro e impar e o segundo par");
    }
    
    return 0;
}