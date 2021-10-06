// 6. Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande, cada uma sendo
// vendida respectivamente por 10, 12 e 15 reais. Construa um algoritmo em que o usuário
// forneça a quantidade de camisetas pequenas, médias e grandes referentes a uma venda, e a
// máquina informe quanto será o valor arrecadado.
#include<stdio.h>

int main()
{

    int qtPequeno, qtMedio, qtGrande, tPequeno, tMedio, tGrande, total;
    tPequeno = 10;
    tMedio = 12;
    tGrande = 15;

    printf("Camisetas pequenas quantia: ");
    scanf("%d", &qtPequeno);

    printf("Camisetas medias quantia: ");
    scanf("%d", &qtMedio);

    printf("Camisetas grandes quantia: ");
    scanf("%d", &qtGrande);

    total = ((qtPequeno*tPequeno)+(qtMedio*tMedio)+(qtGrande*tGrande));

    printf("TOTAL DE CAMISETAS PEQUENAS %d, DE CAMISETAS MEDIAS %d, DE CAMISETAS GRANDES %d ", qtPequeno, qtMedio, qtGrande);
    printf(" TOTAL ARRECADADO %d$", total);

    return 0;
}