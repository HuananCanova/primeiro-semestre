#include<stdio.h>


int main(){

    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    if(num%2==0 && num%3==0){
        printf("Par e totalmente divisivel por 3");
    } else {
        printf("Fim do programa!");
    }
    
    return 0;
}