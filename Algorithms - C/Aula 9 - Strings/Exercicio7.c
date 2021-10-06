#include<stdio.h>
#include<string.h>


int main(){

    char tipoFlor[15], emb; 
    int op, quantia;
    float pCusto = 0, taxaEntrega, vendaF;
    
    
    printf("Tipo (margarida, rosa, flores): \n");
    printf("1. Margarida: 2.75uni.\n");
    printf("2. Rosa, flores): 3.00uni.\n");
    printf("3. Flores): 1.50uni.\n");
    scanf("%d", &op);
    fflush(stdin);

    printf("Informe a quantia: ");
    scanf("%d", &quantia);

    printf("Embalagem disponivel (s/n) ");
    scanf("%c", &emb);

    switch (op)
    {
    case 1:
        pCusto = (quantia * 2.75);
        taxa = (pCusto * 0.05);
        vendaF = (pCusto + taxa);
        break;
    case 2:
        pCusto = (quantia * 3);
        taxa = (pCusto * 0.05);
        vendaF = (pCusto + taxa);
        break;
    case 3:
        pCusto = (quantia * 1.50);
        taxa = (pCusto * 0.05);
        vendaF = (pCusto + taxa);
        break;
    default:
        printf("\nOpcao invalida!. (1, 2, 3)");
        break;
    }

    printf("Valor da venda: %.2f", vendaF);
    
    
    return 0;
}