#include<stdio.h>

struct dadosPessoas{
    char nome[50];
    char sexo;
    int idade;
}pessoa[10];


int main(){

    for (int i = 0; i < 10; i++)
    {
        printf("Informe o nome %d: ", i);
        fgets(pessoa[i].nome, 50, stdin);
        printf("Informe o sexo: (M OU F): ");
        scanf("%c", &pessoa[i].sexo);
        printf("Informe a idade: ");
        scanf("%d", &pessoa[i].idade);
        fflush(stdin);
    }
    
    printf("\n\n");

    char op;
    printf("Informe um sexo (M ou F) para pesquisa: ");
    scanf("%c", &op);

    for (int i = 0; i < 10; i++)
    {
       if (pessoa[i].sexo == op)
       {
           printf("Nome e idade: %s %d\n", pessoa[i].nome, pessoa[i].idade);
       }
       
    }
    


    return 0;
}