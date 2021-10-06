// 16. Ler três valores numéricos inteiros e apresentar o resultado das adições e multiplicações utilizando a
// propriedade distributiva para a máxima combinação possível entre as três variáveis. Por exemplo,
// considerando o uso das variáveis A, B e C, devem ser feitas três adições e três multiplicações, ou seja, deve
// ser combinada a variável A com B, A com C e B com C.
#include<stdio.h>

int main()
{
    int a, b, c, resul1, resul2, resul3;

    printf("Valor da variável A: ");
    scanf("%d", &a);
    printf("Valor da variável B: ");
    scanf("%d", &b);
    printf("Valor da variável C: ");
    scanf("%d", &c);
    printf("\n");

    //SOMA
    resul1 = (a + b);
    resul2 = (a + c);
    resul3 = (b + c);

    printf("resultado soma AB: %d\n", resul1);
    printf("resultado soma AC: %d\n", resul2);
    printf("resultado soma BC: %d\n", resul3);
    printf("\n");

    //MULTI

    resul1 = (a * b);
    resul2 = (a * c);
    resul3 = (b * c);
    
    printf("resultado mult AB: %d\n", resul1);
    printf("resultado mult AC: %d\n", resul2);
    printf("resultado mult BC: %d\n", resul3);
    

    return 0;
}