#include<stdio.h>

int main(){

    float altura, maior = 0, menor = 4, somaF, mediaF, somaG, mediaG;
    int i, cont = 0;
    char sexo;

    for (i = 0; i < 3; i++)
    {
        printf("Informe a altura: ");
        scanf("%f", &altura);
        fgetc(stdin);

        printf("Informe o sexo (m ou f): ");
        scanf("%c", &sexo);
        fgetc(stdin);


        if(altura > maior)
        {
            maior = altura;
        }
        if(altura < menor)
        {
            menor = altura;
        }

        if(sexo == 'f')
        {
            somaF = (somaF + altura);
            cont++;
        }

        somaG = (somaG + altura);
  
    }
       mediaF = somaF/cont;
       mediaG = somaG/i;


        printf("Media de todas as alturas: %.2f \n", mediaG);
        printf("Media de todas as alturas femininas: %.2f \n", mediaF);
        printf("Maior altura digitada: %.2f \n", maior);
        printf("Menor altura digitada: %.2f", menor);

    
    
    return 0;
}