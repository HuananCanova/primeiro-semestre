#include<stdio.h>


int main(){

   float num1, num2;

    printf("Informe um numero: ");
    scanf("%f", &num1);

    printf("Informe outro numero: ");
    scanf("%f", &num2);

    if(num1 > num2){
        printf("%f \n%f", num2, num1);
    } else {
        printf("%f \n%f", num1, num2);
    }
    
    return 0;
}