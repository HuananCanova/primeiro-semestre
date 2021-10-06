#include<stdio.h>
#include<string.h>
#include "Exercicio2bib.h"


void extensaoChange(char arq[20]);


int main(){

    char arquivo[20];


    printf("Informe o nome do arquivo junto com sua extensao: ");
    fgets(arquivo, 20, stdin);

    //Envia por parâmetro o arquivo com a extensão;
    extensaoChange(arquivo);

    return 0;
}