#include<stdio.h>


struct pesquisa{

    char sexo;
    int idade;
    int qtdLivros;

}entrevistado[3];


int main(){

    int totalLivros = 0, cont = 0, cont2 = 0;
    float p;

    for (int i = 0; i < 3; i++)
    {
        printf("Informe o sexo: (M OU F): ");
        scanf("%c", &entrevistado[i].sexo);
        fflush(stdin);
        printf("Informe a idade: ");
        scanf("%d", &entrevistado[i].idade);
        fflush(stdin);
        printf("Quantidade de livros: ");
        scanf("%d", &entrevistado[i].qtdLivros);
        fflush(stdin);
    }


    char op;

    printf("\n------MENU DE RELATORIOS------\n");
    printf("\na) Por ordem inversa de registro\n");
    printf("\nb) Por idade em ordem crescente\n");
    printf("\nc) Por idade em ordem decrescente\n");
    printf("\nd) Por sexo e por ordem de sexo\n");
    scanf("%c", &op);
    fflush(stdin);
    
    int aux;

    switch (op)
    {
    case 'a':
        for (int i = 2; i >= 0; i--)
        {
            printf("\n-------LISTA DE ENTREVISTADOS-------\n");
            printf("\nEntrevistado: %d\n %c\n%d\n%d \n", i, entrevistado[i].sexo, entrevistado[i].idade, entrevistado[i].qtdLivros);
        }
        
        break;
    case 'b':
        printf("\n--LISTA DE IDADES ORDEM CRESCENTE--\n");
        for (int i = 0; i < 3; i++)
        {   
            for (int j = (i+1); j < 3; j++)
            {
                if (entrevistado[i].idade > entrevistado[j].idade)
                {
                    aux = entrevistado[i].idade;
                    entrevistado[i].idade = entrevistado[j].idade;
                    entrevistado[j].idade = aux;
                }
            }
            printf("\n%d\n", entrevistado[i].idade);
        }
        break;
    case 'c':
        printf("\n--LISTA DE IDADES ORDEM DECRESCENTE--\n");
        for (int i = 0; i < 3; i++)
        {   
            for (int j = (i+1); j < 3; j++)
            {
                if (entrevistado[i].idade < entrevistado[j].idade)
                {
                    aux = entrevistado[i].idade;
                    entrevistado[i].idade = entrevistado[j].idade;
                    entrevistado[j].idade = aux;
                }
            }
            printf("\n%d\n", entrevistado[i].idade);
        }
        break;
    default:
        printf("\nOPCAO INVALIDA!!!\n");
        break;
    }

    return 0;
}
