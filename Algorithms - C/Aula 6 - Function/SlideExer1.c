#include<stdio.h>



void verificaNum()
{

    int num;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);


    if(num > 0 && num%2==0)
    {
        printf("Positivo e par");
    }else if(num > 0 && num%2!=0)
    {
        printf("Positivo e impar");
    }else if(num ==0)
    {
        printf("Numero igual a zero!");
    }else{
        printf("Numero negativo");
    }
} 

int main()
{

    verificaNum();
    return 0;
}