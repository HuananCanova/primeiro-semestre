#include<stdio.h>


int main(){

    int x = 5000, y = 25, i = 0;

    //x -- incremento 4 em 4
    //y -- incremento 7 em 7

    //Pelo fato da variável x começar com um valor maior, mas com um incremento inferior
    //quando a variável y passar o valor da variável x a diferença entre as variáveis só aumentaria
    //portanto utilizar (x >= y)
    while (x >= y)
    {
        x += 4;
        y += 7;
        i++;
    }

    //a condição de (x >= y) faz com que o loop termine com a menor diferença possível
    //que nesse caso foi 2
  
    printf("x: %d y: %d", x, y);
    printf("\nVezes executado: %d", i);

    return 0;
}