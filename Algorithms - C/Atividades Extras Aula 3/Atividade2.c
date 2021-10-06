// 2. A padaria Hotpão vende uma certa quantidade de pães franceses e uma quantidade de broas
// a cada dia. Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono quer
// saber quanto arrecadou com a venda dos pães e broas (juntos), e quanto deve guardar numa
// conta de poupança (10% do total arrecadado). Você foi contratado para fazer os cálculos
// para o dono. Com base nestes fatos, faça um algoritmo para ler as quantidades de pães e de
// broas, e depois calcular os dados solicitados.
#include<stdio.h>

int main()
{

    float paesF, broas, totalVendas, poupan;
    int qtPaes, qtBroas;

    paesF = 0.12;
    broas = 1.50;

    printf("Quantia de paes franceses desejados: ");
    scanf("%d", &qtPaes);

    printf("Quantia de broas desejadas: ");
    scanf("%d", &qtBroas);

    paesF = (paesF * qtPaes);
    broas = (broas * qtBroas);


    totalVendas = (paesF + broas);

    poupan = totalVendas*0.1;

    printf("O total arrecado com a venda: %.2f", totalVendas);
    printf("\nQuantia reservada para a conta poupanca: %.2f", poupan);
    
    return 0;
}