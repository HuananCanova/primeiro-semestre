#include<stdio.h>

int main(){

    int input, cont = 0;

    do
    {
        printf("Informe um numero (para sair digite 0): ");
        scanf("%d", &input);

        if(input == 10){
            cont++;
        }

    } while (input != 0);

    printf("Vezes que o numero dez foi digitado %d", cont);
    
    return 0;
}