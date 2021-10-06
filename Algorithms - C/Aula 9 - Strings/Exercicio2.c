#include<stdio.h>
#include<string.h>


int main(){

    char palavra[40];
    char op;
    int cont = 0;

    printf("informe uma palavra: ");
    fgets(palavra, 40, stdin);

    while (cont != 1)
    {

        printf("conversao: maiuscula(+) ou minuscula(-) ");
        scanf("%c", &op);
        fflush(stdin);
        
        if (op == '+')
        {
            strupr(palavra);
            puts(palavra);
            cont++;
        } else if (op == '-')
        {
            strlwr(palavra);
            puts(palavra);
            cont++;
        }else{
            printf("Opcao invalida\n");
        }

    }
    

    
    return 0;
}