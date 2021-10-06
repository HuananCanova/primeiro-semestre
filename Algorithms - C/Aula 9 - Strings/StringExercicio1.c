#include<stdio.h>
#include<string.h>

void NomeCompleto(){
    char nome[15];
    char sobrenome[20];

    printf("Informe seu nome: ");
    fgets(nome, 15, stdin);
    
    printf("Informe seu sobrenome: ");
    fgets(sobrenome, 20, stdin);

    printf("Nome Completo: %s%s", nome, sobrenome);
}

int main(){
    
    NomeCompleto();

    return 0;
}