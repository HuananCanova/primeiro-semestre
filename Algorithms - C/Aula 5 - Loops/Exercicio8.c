#include<stdio.h>

int main(){

    int cont = 0, primeiro = 0, segundo = 1, fib;


    for (int i = 0; i < 15; i++)
    {

        fib = (primeiro + segundo);
        primeiro = segundo;
        segundo = fib;

        printf("%d\n", fib);
    }
    
    
    return 0;
}