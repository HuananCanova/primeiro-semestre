#include<stdio.h>


int main(){

   float num1, num2;

    printf("Informe um numero: ");
    scanf("%f", &num1);

    printf("Informe outro numero: ");
    scanf("%f", &num2);

    num1 < num2? printf("%.2f \n%.2f", num2, num1) : printf("%.2f \n%.2f", num1, num2);
    
    return 0;
}