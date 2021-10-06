#include<stdio.h>


struct pesquisa{

    char sexo;
    int idade;
    int qtdLivros;

}entrevistado[20];


int main(){

    int totalLivros = 0, cont = 0, cont2 = 0;
    float p;

    for (int i = 0; i < 20; i++)
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



    for (int i = 0; i < 20; i++)
    {
        if (entrevistado[i].sexo == 'f')
        {
           if (entrevistado[i].qtdLivros > 5)
           {
               cont++;
           }
        }

        if (entrevistado[i].idade < 10)
        {
           totalLivros += entrevistado[i].qtdLivros;
        }

        if (entrevistado[i].qtdLivros == 0)
        {
            cont2++;
        }
    }
    
    printf("\nTotal de livros lidos: %d\n", totalLivros);
    printf("Mulheres que leram mais de 5 livros: %d\n", cont);
    printf("Percentual de pessoas que nao leram: %d\n", ((100*cont2)/20));

    return 0;
}
