#include<stdio.h>
#include<string.h>


int main(){

    char string[20], letra;
    int retorno, cont = 0;

    printf("Informe uma palavra: ");
    fgets(string, 20, stdin);

    printf("Qual letra deseja testar: ");
    scanf("%c",&letra);
    fflush(stdin);

    strlwr(string);

    for (int i = 0; i < strlen(string); i++)
    {

        if (letra == string[i])
        {
            cont++;
        }
        
    }

    printf("A letra %c aparece %dx", letra, cont);


    return 0;
}