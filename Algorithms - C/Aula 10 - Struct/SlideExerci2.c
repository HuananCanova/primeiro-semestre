#include<stdio.h>

struct posto{
    int cod;
    char nome[20];
    float pNormal, pEstudante;
    //pEstudante = 1/2 pNormal;
};

int main(){
    
    struct posto item[5];
    printf("-----Cadastro de produtos-----\n\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Codigo do produto %d: ", (i+1));
        scanf("%d", &item[i].cod);
        fflush(stdin);
        printf("Nome do produto: ");
        fgets(item[i].nome, 20, stdin);
        printf("Preco normal: ");
        scanf("%f", &item[i].pNormal);
        fflush(stdin);
        printf("\n");
        item[i].pEstudante = (item[i].pNormal/2);
    }

    printf("------LISTA DE PRODUTOS------\n\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Codigo produto %d: %d\n",(i+1), item[i].cod);
        printf("Nome produto %d: %s\n",(i+1), item[i].nome);
        printf("Preco normal produto %d: %.2f\n",(i+1), item[i].pNormal);
        printf("Preco estudante produto %d: %.2f\n",(i+1), item[i].pEstudante);
        printf("\n");
    }
    
    


    return 0;
}