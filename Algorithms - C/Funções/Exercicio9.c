#include<stdio.h>
#include"Exercicio9bib.h"
void adicao(float v1, float v2);

void subtracao(float v1, float v2);

void multiplicacao(float v1, float v2);

void divisao(float v1, float v2);

int sair();

int main(){
    float v1, v2, resul;
    char op;
    
    do
    {
        printf("\n---------Qual a operacao desejada-------");
        printf("\n(a) - adicao\n(s) - subtracao\n(m) - multiplicacao\n(d) - divisao\nPARA SAIR DIGITE (e)\n");
        scanf("%c", &op);
        fflush(stdin);

        if (op!= 'e')
        {
        printf("Informe um valor: ");
        scanf("%f", &v1);
        printf("Informe outro valor: ");
        scanf("%f", &v2);
        fflush(stdin);
        }
        

        switch (op)
    {
    case 'a':
        adicao(v1, v2);
        break;
    case 's':
        subtracao(v1, v2);
        break;
    case 'm':
        multiplicacao(v1, v2);
        break;
    case 'd':
        divisao(v1, v2);
        break;
    case 'e':
        sair();
        break;
    default:
        printf("Opcao invalida!");
        break;
    }

    } while (op != 'e');

    return 0;
}