#include<stdio.h>
#include<math.h>


int main()
{

    int num;

    printf("Valor: ");
    scanf(" %d ",&num);

    num = pow(num, 2);

    printf("valor final: %d", &num);
    return 0;
}