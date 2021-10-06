#include<stdio.h>
#include<string.h>


int main(){

    char palavra1[20], palavra2[20];
    int lenght1, lenght2, retorno;

    printf("Informe a 1 palavra: ");
    fgets(palavra1, 20, stdin);

    printf("Informe a 2 palavra: ");
    fgets(palavra2, 20, stdin);


    retorno = strcmp(palavra1, palavra2);

    lenght1 = strlen(palavra1);
    lenght2 = strlen(palavra2);

    if (retorno == 0)
    {
        printf("Tamanhos iguais: %d", lenght1);
    } else {
        printf("Tamanhos diferentes: Palavra 1: %d e palavra 2: %d", lenght1, lenght2);
    }
    

    return 0;
}