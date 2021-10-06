#include<stdio.h>


struct media{
    char nome[30];
    float nota1;
    float nota2;
    float mediaFinal;
};

int main(){

    printf("Informe seu nome e as notas: \n");

    struct media aluno;
    fgets(aluno.nome, 50, stdin);
    printf("Nota 1: \n");
    scanf("%f", &aluno.nota1);
    printf("Nota 2: \n");
    scanf("%f", &aluno.nota2);
    
    aluno.mediaFinal = (aluno.nota1 + aluno.nota2)/2;
    printf("------DADOS DO ALUNO---------\n\n");
    printf("Nome: %s", aluno.nome);
    printf("Nota 1: %.2f\n", aluno.nota1);
    printf("Nota 2: %.2f\n", aluno.nota2);
    printf("Media final: %.2f\n", aluno.mediaFinal);
    return 0;
}