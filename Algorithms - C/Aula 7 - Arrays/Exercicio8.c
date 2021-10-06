#include<stdio.h>

void vetorChar();

int main(){

    vetorChar();
    return 0;
}

void vetorChar(){
    int n;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);

    char vetChar[n];

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            vetChar[i] = 'P';
            printf("Vetor - %d: %c\n", i, vetChar[i]);
        } else {
            vetChar[i] = 'I';
            printf("Vetor - %d: %c\n", i, vetChar[i]);
        }
        
    }
}