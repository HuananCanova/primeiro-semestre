#include<stdio.h>


int main(){

    int num, divTres, par;

    printf("Informe um numero: ");
    scanf("%d", &num);

   
    divTres = num % 3;
    par = num % 2;

    ((divTres == 0) && (par == 0))? printf("Par e totalmente divisivel por 3") : printf("Fim do programa");

    return 0;
}