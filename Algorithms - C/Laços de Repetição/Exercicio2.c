#include<stdio.h>

int main(){

    float nota1, nota2, media;

    for (int i = 0; i < 20; i++)
    {
        printf("Informe a primeira nota: ");
        scanf("%f", &nota1);
        printf("Informe a segunda nota: ");
        scanf("%f", &nota2);

        media = (nota1 + nota2)/2;
        printf("\nMedia aritmetica do aluno %d: %.2f \n", (i+1), media);
    }

    return 0;
}