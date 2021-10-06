#include<stdio.h>

struct fabrica{

    int cod;
    char descr[20];
    float pMetro;
    float qtdMetro;


}tecidos[4];



int main(){

    for (int i = 0; i < 2; i++)
    {
        printf("Informe o codigo: ");
        scanf("%d", &tecidos[i].cod);
        fflush(stdin);
        printf("Informe a descricao: ");
        fgets(tecidos[i].descr, 20, stdin);
        printf("Informe o preco do metro: ");
        scanf("%f", &tecidos[i].pMetro);
        printf("Informe a quantia de metros em estoque: ");
        scanf("%f", &tecidos[i].qtdMetro);
    }
    
    printf("\n------Informacoes dos tecidos------\n\n");
    for (int i = 0; i < 2; i++)
    {
        printf("Tecido %d\n%d %s %.2f %.2f", (i+1),tecidos[i].cod, tecidos[i].descr, tecidos[i].pMetro, tecidos[i].qtdMetro);
    }
    

    return 0;
}