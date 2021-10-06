#include<stdio.h>

void vetor13(){
    int vetA[5], vetB[8], vetC[13];

    for (int i = 0; i < 5; i++)
    {
        printf("Valor VETA: ");
        scanf("%d", &vetA[i]);
    }

    for (int j = 0; j < 8; j++)
    {
        printf("Valor VETB: ");
        scanf("%d", &vetB[j]);
    }
   
    for (int k = 0; k < 5; k++)
    {
            vetC[k] = vetA[k];
            printf("Vetor C - %d: %d\n", k, vetC[k]); 
    }
   
    for (int y = 5; y < 13; y++)
        {
            vetC[y] = vetB[(y-5)];
            printf("Vetor C - %d: %d\n", y, vetC[y]);
        }
}

int main(){

    vetor13();
    return 0;
    
}