#include<stdio.h>
#include<string.h>

void NomeCompleto(){
    char nome[20], sobrenome[20], nCompleto[40];


    printf("Informe seu nome: ");
    fgets(nome, 20, stdin);
    
    printf("Informe seu sobrenome: ");
    fgets(sobrenome, 20, stdin);
   
    strcpy(nCompleto, nome);
    strcat(nCompleto, sobrenome);

    puts(nCompleto);

}

int main(){
    
    NomeCompleto();

    return 0;
}