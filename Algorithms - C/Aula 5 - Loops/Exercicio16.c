#include<stdio.h>


int main()
{
    int num, contPrimo = 0, nPrimo;

    printf("Informe um numero: \n");
    scanf("%d", &num);

    printf("Divisivel por: ");
    for (int i = 1; i <= num; i++)
    {
       if(num % i == 0){
           printf("%d ", i);
           contPrimo++;
       }
       
    }
    
    if (contPrimo == 2)
    {
        printf("\nNumero e primo!");
    } else {
        printf("\nNumero nao e primo!");
    }
    
    return 0;
}