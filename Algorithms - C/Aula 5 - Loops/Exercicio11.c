#include<stdio.h>

int main(){

    long int totalGraos = 0, primeiraCasa = 0, proxCasa = 1;

    for (int i = 1; i < 64; i++)
    {
        
        totalGraos = primeiraCasa + proxCasa;
        proxCasa = (totalGraos+totalGraos);
        
        printf("Posicao %d: %li graos\n", i, totalGraos);
    }

    
    return 0;
}