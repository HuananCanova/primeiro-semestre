#include<stdio.h>


struct dados{
    char nome[30];
    char endereco[30];
    char email[30];
}pessoa;

void listaDados(){
    printf("Informe o nome: ");
    fgets(pessoa.nome, 30, stdin);
    printf("Informe o endereco: ");
    fgets(pessoa.endereco, 30, stdin);
    printf("Informe o email: ");
    fgets(pessoa.email, 30, stdin);

    printf("Nome: %s", pessoa.nome);
    printf("Endereco: %s", pessoa.endereco);
    printf("Email: %s", pessoa.email);
}


int main(){

    listaDados();
    return 0;
}