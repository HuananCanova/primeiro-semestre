// 21. Ler o valor correspondente ao salário mensal (SM) de um trabalhador e também o valor do percentual (PE)
// de reajuste a ser atribuído. Apresentar o valor do novo salário (NS).

#include<stdio.h>
#include<math.h>

int main()
{

    float sMensal, percent, newSala;

    printf("Informe o salario mensal: ");
    scanf("%f", &sMensal);

    printf("Informe o percentual: ");
    scanf("%f", &percent);

    percent = sMensal*(percent/100);
    newSala = (sMensal+percent);

    printf("Novo salário: %.2f", newSala);

    return 0;
}