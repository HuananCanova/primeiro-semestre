#include<stdio.h>
#include<string.h>

int main(){

    char op, nome_compl[45], nome[15], sobrenome[30], end[80], fone[8], id[3];
    int tamanho;

    do {
    printf("Informe seu nome: ");
    fgets(nome, 15, stdin);
    fflush(stdin);

    printf("Informe seu sobrenome: ");
    fgets(sobrenome, 30, stdin);
    fflush(stdin);

    printf("Informe seu endereco: ");
    fgets(end, 80, stdin);
    fflush(stdin);

    printf("Informe seu telefone: ");
    fgets(fone, 8, stdin);
    fflush(stdin);

    printf("Informe sua idade: ");
    fgets(id, 3, stdin);
    fflush(stdin);

    strcpy(nome_compl, nome);

    strcat(nome_compl, sobrenome);

    tamanho = strlen(nome_compl);

    printf("Nome completo: %s\n", nome_compl);
    puts(end);
    puts(fone);
    puts(id);
    puts(tamanho);

    printf("Deseja adicionar outro colega? S/N ");
    scanf("%c", &op);
    fflush(stdin);

    } while ((op != 'n' && op != 'N'));

    
    return 0;
}