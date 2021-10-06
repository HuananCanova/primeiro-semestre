#include<stdio.h>

int main()
{
    int mes = 1;
    float apli, newSaldo, saldo;

    printf("Informe o valor da aplicacao: ");
    scanf("%f", &apli);

    saldo = apli;

    do
    {
        newSaldo = saldo + (saldo*0.05);
        newSaldo = (newSaldo - 200);
        saldo = newSaldo;

        mes++;
    } while (saldo > 200);
    
    printf("%d meses, saldo = %.2f", mes, newSaldo);



    return 0;
}